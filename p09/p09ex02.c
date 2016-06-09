/***  p09ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void left(char *d,char *s,int n);

int main()
{
	char str1[]="exercises";
	char str2[32]="abcdefghijklmn";
	char str3[32]="abcdefghijklmn";
	left(str2,str1,5);
	puts(str2);
	left(str3,str1,10);
	puts(str3);
	return 0;
}

void left(char *d,char *s,int n)
{
	int i;
	for (i=0;i<n;i++){
		if(*s) *d++ = *s++;
	}
	*d = 0;
}

/**************** ÀsŒ‹‰Ê *****************

exerc
exercises

*******************************************/
