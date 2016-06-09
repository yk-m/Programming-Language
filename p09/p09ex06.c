/***  p09ex06.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>
#include <stdlib.h>

int prime(int *array, int n);
int *openIntArray(int size);

int main()
{
	int *primestr;
	int size,i,count=0;
	printf("n = ");
	scanf("%d",&size);
	primestr = openIntArray(size);
	*primestr = prime(primestr,size);
	for (i=0;i<size+1;i++){
		if (primestr[i]== 1 ){
			printf("%4d",i);
			count++;
			if (count%10==0) printf("\n");
		}
	}
	free(primestr);
	return 0;
}

int prime(int *array, int n)
{
	int i,j;
	for (i=0;i<n+1;i++) array[i]=1;
	for (i=0;i<=1;i++) array[i]=0;
	for (j=2;j<n;j++){
		for (i=j*2;i<n+1;i=i+j) array[i]=0;
	}
	return *array;
}

int *openIntArray(int size)
{
	int *array=(int *)malloc((size+1)*sizeof(int));
	if (array==NULL) {
		printf("** out of memory **\n");
		exit(1);
	}
	return array;
}

/**************** ÀsŒ‹‰Ê *****************

n = 254
   2   3   5   7  11  13  17  19  23  29
  31  37  41  43  47  53  59  61  67  71
  73  79  83  89  97 101 103 107 109 113
 127 131 137 139 149 151 157 163 167 173
 179 181 191 193 197 199 211 223 227 229
 233 239 241 251

*******************************************/
