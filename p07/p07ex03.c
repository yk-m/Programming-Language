/***  p07ex03.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char InputFileName[50], mychar[50];
	int ch, count1=0, count2=0;
	printf("�R�s�[���̃t�@�C���� : ");
	gets(InputFileName);
	fp=fopen(InputFileName,"r");
	if (fp==NULL) {
		printf("can't open file <%s>\n",InputFileName);
		exit(1);
	}
	ch=fgetc(fp);
	while (ch!=EOF) {
		count1++;
		ch=fgetc(fp);
		if (ch=='\n') count2++;
	}
	if (ch!='\n') count2++;
	printf("������ : %d, �s�� : %d\n",count1,count2);
	
	fclose(fp);
	return 0;
}


/**************** ���s���� *****************

�R�s�[���̃t�@�C���� : marks.txt
������ : 839, �s�� : 42

*******************************************/
