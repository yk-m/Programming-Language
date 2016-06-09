#include <stdio.h>
#include <stdlib.h> /*�֐�exit�̂��߂ɕK�v*/

int main()
{
    FILE *fp;
    int point[100][4];
    int sum[4];
    double average[4]; /*�p�E���E���E(���v)�̏��̕��ϒl*/
    int i,j,number;
    fp=fopen("marks.txt","r");
    if (fp==NULL) {
        printf("can't open a file\n");
        exit(1);
    }
    i=0;
    while (fscanf(fp,"%d,%d,%d,%d",&point[i][0],&point[i][1],&point[i][2],&point[i][3])==4) { /*���̐����Q��*/
        i++;
    }
    fclose(fp);
    number=i;
    for (i=0;i<number;i++) {
        point[i][5]=0;
        for (j=0;j<4;j++) {
            point[i][5]+=point[i][j];
        }
    }
    for (j=0;j<5;j++) {
        sum[j]=0;
        for (i=0;i<number;i++) {
            sum[j]+=point[i][j];
        }
        average[j]=sum[j]/42.0;
    }
    printf("�w���ԍ��@�p��@���w�@����@���v\n");
    for (i=0;i<number;i++) {
        printf("%6d    %3d   %3d   %3d   %3d\n",
            i,point[i][0],point[i][1],point[i][2],point[i][3]);
    }
    printf("   ����    %.1lf  %.1lf  %.1lf %.1lf\n",
        average[0],average[1],average[2],average[3]);
    return 0;
}