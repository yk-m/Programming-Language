/***  p09ex05.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int mystrlen(char *str);
void reverseString(char *s);

int main()
{
	char  str1[]="exercises";
	char  str2[]="pointer programing";
	puts(str1);
	reverseString(str1);
	puts(str1);
	puts(str2);
	reverseString(str2);
	puts(str2);
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

void reverseString(char *s)
{
	int cnt,i=0;
	char d[50],*p,*p2;
	cnt = mystrlen(s);
	p = d + cnt -1;
	p2 = s;
	while(*s){
		*p-- = *s++;
	}
	s = p2;
	while(s[i]){
		s[i] = d[i];
		i++;
	}
}

/**************** ÀsŒ‹‰Ê *****************

exercises
sesicrexe
pointer programing
gnimargorp retniop

*******************************************/
