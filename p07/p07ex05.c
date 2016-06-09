/***  p07ex05.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fname[100],str[100];
	FILE *fp,*fp2;
	int ch;
	int count=0,countU=0,result=1;
	printf("file name : ");
	gets(fname);
	
	fp=fopen(fname,"r");
	fp2=fopen("outputString_ex05.txt","w");
	if (fp==NULL || fp2==NULL) {
		printf("can't open %s\n",fname);
		exit(1);
	}
	
	while ((ch=fgetc(fp)) != EOF) {
		if (isalnum(ch)||ch=='_') {
			putc(ch,fp2);
			result = 1;
		} else {
			if (result==1){
				count++;
				result=0;
				if (count%8==0) {
					fprintf(fp2,"\n");
				} else {
					fprintf(fp2," ");
				}
			}
		}
	}
	
	fclose(fp);
	fclose(fp2);
	return 0;
}


/**************** é¿çsåãâ  *****************

1234 wer qwe123 wer456 sw_qwe q12_12 12qwe A123B123
wsed_123

*******************************************/
