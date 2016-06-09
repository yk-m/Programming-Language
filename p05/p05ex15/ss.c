
#include <stdio.h>
#include <stdlib.h>

int num[10][10][10][10];
int nottho[10];
int nothun[10];
int notten[10];
int notone[10];

int checkOKnum()
{
	int i;
	int numarray[4];
	int* noNum;
	for (i=0;i<10000;i++){
		if(checkStringInt(i) == 1) {
			noNum = changeNum(i,numarray);
			num[noNum[0]][noNum[1]][noNum[2]][noNum[3]] = 0;
		}
	}
}

int *changeNum(int s, int* numcheck)
{
	numcheck[0] = s / 1000;
	numcheck[1] = (s - numcheck[0]*1000) / 100;
	numcheck[2] = (s - numcheck[0]*1000 - numcheck[1]*100) / 10;
	numcheck[3] = s - numcheck[0]*1000 - numcheck[1]*100 - numcheck[2]*10;
	return numcheck;
}

int resetNum(){
	int i,j,k,l;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (l=0;l<10;l++) {
					num[i][j][k][l] = 1;
				}
			}
		}
	}
}

int putNum(){
	int i,j,k,l;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (l=0;l<10;l++) {
					printf("num[%d][%d][%d][%d] = %d\n",i,j,k,l,num[i][j][k][l]);
				}
			}
		}
	}
}

int main()
{
	resetNum();
	checkOKnum();
	putNum();
	return 0;
}