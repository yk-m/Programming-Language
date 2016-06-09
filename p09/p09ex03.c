/***  p09ex03.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int mystrlen(char *str);
void right(char *d,char *s,int n);

int main()
{
	char str1[]="exercises";
	char str2[32]="abcdefghijklmn";
	char str3[32]="abcdefghijklmn";
	right(str2,str1,5);
	puts(str2);
	right(str3,str1,10);
	puts(str3);
	return 0;
}

int mystrlen(char *str)
{
	int count=0, i=0;
	while (*str){
		count++;
		str++;
	}
	return count;
}

void right(char *d,char *s,int n)
{
	char *p;
	int cnt,i;
	cnt = mystrlen(s);
	cnt = cnt-n;
	if(cnt>0){
		p = s + cnt;
		for(i=0;i<n;i++){
			*d++ = *p++;
		}
		*d = 0;
	} else {
		for (i=0;i<n;i++){
			if(*s) *d++ = *s++;
		}
		*d = 0;
	}
}

/**************** ÀsŒ‹‰Ê *****************

cises
exercises

*******************************************/
