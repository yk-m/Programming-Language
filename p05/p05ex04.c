/***  p05ex04.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>


double average(int array[], int size)
{
    int i=0;
    double ave,sum=0.0;
    for (i=0; i<size; i++){
        sum += array[i];
    }
    ave = sum/(size-1);
    return ave;
}

int main()
{
    double ave;
    int array[100],size=0;
    do {
        size++;
        printf("�f�[�^����� >> ");
        scanf("%d",&array[size]);
    } while (0<=array[size]);
    ave = average(array,size);
    printf("%lf\n",ave);
    return 0;
}


/**************** ���s���� *****************

�f�[�^����� >> 1
�f�[�^����� >> 2
�f�[�^����� >> 3
�f�[�^����� >> 4
�f�[�^����� >> 5
�f�[�^����� >> 6
�f�[�^����� >> 7
�f�[�^����� >> 8
�f�[�^����� >> 9
�f�[�^����� >> 10
�f�[�^����� >> -1
5.500000

�f�[�^����� >> 1
�f�[�^����� >> 2
�f�[�^����� >> 3
�f�[�^����� >> 4
�f�[�^����� >> 5
�f�[�^����� >> 6
�f�[�^����� >> -1
3.500000

*******************************************/
