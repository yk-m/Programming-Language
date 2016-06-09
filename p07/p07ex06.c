/***  p07ex06.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char wordContainer[350][100];
char wordCounter[100];

int count=0;

void wordCount(int,char*);

int main()
{
	char fname[100],str[100];
	FILE *fp,*fp2;
	int ch,i,j;
	int length=0,word=0;
	
	printf("file name : ");
	gets(fname);
	
	fp=fopen(fname,"r");
	fp2=fopen("outputString_ex06.txt","w");
	if (fp==NULL || fp2==NULL) {
		printf("can't open %s\n",fname);
		exit(1);
	}
	
	while ((ch=fgetc(fp)) != EOF) {
		if (isalnum(ch)||ch=='_') {
			str[length]=ch;
			word=1;
			length++;
		} else {
			if (word==1){
				str[length]=0;
				wordCount(length,str);
				for (i=0;i<length;i++){
					str[i]=0;
				}
				length=0;
				word=0;
			}
		}
	}
	
	for (i=0;i<count;i++){
		fprintf(fp2,"%s    %d\n",wordContainer[i],wordCounter[i]);
	}
	
	fclose(fp);
	fclose(fp2);
	return 0;
}

void wordCount(int length,char *str)
{
	int i,j,exist=0;
	for (i=0;i<count;i++){
		if (strcmp(str,wordContainer[i])==0) exist=i;
	}
	if (exist==0){
		for (i=0;i<length;i++){
			wordContainer[count][i]=str[i];
		}
		wordContainer[count][i]=0;
		wordCounter[count]=1;
		count++;
	} else {
		wordCounter[exist]++;
	}
}


/**************** é¿çsåãâ  *****************

p07ex05    1
c    1
s12169    1
2J34    1
S    1
include    2
stdio    1
h    2
stdlib    1
int    3
main    1
char    1
fname    4
100    2
str    1
FILE    1
fp    5
fp2    7
ch    5
count    3
0    5
countU    1
result    4
1    4
printf    2
file    1
name    1
gets    1
fopen    2
r    1
outputString_ex05    1
txt    1
w    1
if    4
NULL    2
can    1
t    1
open    1
s    2
n    2
exit    1
while    1
fgetc    1
EOF    1
isalnum    1
_    1
putc    1
else    2
8    1
fprintf    2
fclose    2
return    1
1234    1
wer    1
qwe123    1
wer456    1
sw_qwe    1
q12_12    1
12qwe    1
A123B123    1
wsed_123    1

*******************************************/
