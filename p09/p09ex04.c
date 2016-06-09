/***  p09ex04.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void left(char *d,char *s,int n);
void mid(char *d,char *s,int m,int n);

int main()
{
	char str1[]="exercises";
	char str2[32]="abcdefghijklmn";
	char str3[32]="abcdefghijklmn";
	char str4[32]="abcdefghijklmn";
	puts(str1);
	mid(str2,str1,2,5);
	puts(str2);
	mid(str3,str1,2,10);
	puts(str3);
	mid(str4,str1,12,3);
	puts(str4);
	printf("%d\n",str4[0]);
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

void mid(char *d,char *s,int m,int n)
{
	char *p;
	int i;
	p = s + m -1;
	left(d,p,n+1);
}

/**************** ÀsŒ‹‰Ê *****************

exercises
xercis
xercises

0

*******************************************/
