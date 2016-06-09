/***  p07ex04.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>
#include <string.h>

void reverseString(char string[])
{
	int i,j;
	char string2[50];
	j=0;
	while (string[j]!='\0') {
		j++;
		if (string[j]=='\n') {
			string[j] = '\0';
			j--;
		}
	}
	string2[j]='\0';
	j--;
	i=0;
	while (string[i]!='\0') {
		string2[j]=string[i];
		i++;
		j--;
	}
	string2[i]='\n';
	string2[i+1]='\0';
	strcpy(string,string2);
}

int main()
{
	FILE *fp,*fp2;
	char InputFileName[50], string[50];
	printf("ファイル名 : ");
	gets(InputFileName);
	fp =fopen(InputFileName,"r");
	fp2=fopen("outputString.txt","w");
	if (fp==NULL) {
		printf("can't open file <%s>\n",InputFileName);
		exit(1);
	}
	while (fgets(string,510,fp)!=NULL) {
		reverseString(string);
		fputs(string,fp2);
	}
	
	fclose(fp);
	fclose(fp2);
	return 0;
}


/**************** 実行結果 *****************

>h.oidts< edulcni#


)(niam tni
{
;)"n\?uoy era woH .olleH"(ftnirp    
;)"n\?uoY dnA .sknaht ,eniF"(ftnirp    
;)"n\.os oS"(ftnirp    
;0 nruter    
}

*******************************************/
