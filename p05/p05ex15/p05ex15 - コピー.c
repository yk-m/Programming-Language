/***  p05ex14.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>
#include <stdlib.h>

int num[10][10][10][10];
int nottho[10];
int nothun[10];
int notten[10];
int notone[10];
int numex[4];

void resetNum();
void putNum();
void changeNum(int s, int numcheck[]);
int checkNum();
void checkOKnum();
int checkStringInt(int s[]);
int countBlowInt(int numcom[]);
int countHitInt(int numcom[]);
void checkHandB(int h, int b);
void generateNumberInt();

int checkString(char s[]);
int countBlow(char s1[], char s2[]);
int countHit(char s1[], char s2[]);
void generateNumber(char theNumber[]);

int main()
{
	int blow=0,hit=0,checknum=0,count=0;
	resetNum();
	srand((unsigned) time(NULL));
	generateNumberInt();
	while (checknum == 0) {
		count++;
		printf("%d‰ñ–Ú\n",count);
		do {
			printf("hit = ");
			scanf("%d",&hit);
			printf("blow = ");
			scanf("%d",&blow);
		} while (!(hit<5 && blow<5));
		checkHandB(hit,blow);
		checknum = checkNum();
	}
	printf("“š‚¦‚Í%d‚Å‚·",checknum);
	return 0;
}

void resetNum()
{
	int i,j,k,l;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (l=0;l<10;l++) {
					num[i][j][k][l] = 0;
				}
			}
		}
	}
}

void putNum()
{
	int i,j,k,l;
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (l=0;l<10;l++) {
					if (num[i][j][k][l] == 1) {
						printf("num[%d][%d][%d][%d] = %d\n",i,j,k,l,num[i][j][k][l]);
					}
				}
			}
		}
	}
}

void changeNum(int s, int numcheck[])
{
	numcheck[0] = s / 1000;
	numcheck[1] = (s - numcheck[0]*1000) / 100;
	numcheck[2] = (s - numcheck[0]*1000 - numcheck[1]*100) / 10;
	numcheck[3] =  s - numcheck[0]*1000 - numcheck[1]*100 - numcheck[2]*10;
}

int checkNum()
{
	int i,count1=0,now;
	int checki[4];
	for (i=0;i<10000;i++){
		changeNum(i,checki);
		if(checkStringInt(checki) == 0) {
			if(num[checki[0]][checki[1]][checki[2]][checki[3]] == 1) {
				count1++;
				now = i;
			}
		}
	}
	if (count1 == 1) return now;
	return 0;
}

void checkOKnum()
{
	int i;
	int noNum[4];
	for (i=0;i<10000;i++){
		changeNum(i,noNum);
		if(checkStringInt(noNum) == 1) {
			num[noNum[0]][noNum[1]][noNum[2]][noNum[3]] = 0;
		}
	}
}

int checkStringInt(int s[])
{
	int check=0,i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if(j!=i && s[i]==s[j]) check=1;
		}
	}
	return check;
}

int countBlowInt(int numcom[])
{
	int blow=0,i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if(j!=i && numcom[j]==numex[i]) blow++;
		}
	}
	return blow;
}

int countHitInt(int numcom[])
{
	int hit=0,i;
	for (i=0;i<4;i++){
		if (numcom[i]==numex[i]) hit++;
	}
	return hit;
}

void checkHandB(int h, int b)
{
	int i, blow, hit;
	int numi[4];
	for (i=0;i<10000;i++){
		changeNum(i,numi);
		if(checkStringInt(numi) == 0) {
			blow = countBlowInt(numi);
			hit  = countHitInt(numi);
			if (h==hit && b==blow) {
				num[numi[0]][numi[1]][numi[2]][numi[3]] = 1;
			}
		}
	}
}

void generateNumberInt()
{
	int check=0,i=0;
	int ex;
	do {
		for (i=0; i<4; i++) {
			ex=rand()%10;
			numex[i]=ex;
		}
		check=checkStringInt(numex);
	} while (check==1);
}

int checkString(char s[])
{
	int l=0,check=0,i;
	while(s[l]!=0){
		if (s[l]<48 || 57<s[l]) check=1;
		for (i=0;i<4;i++){
			if(l!=i && s[l]==s[i]) check=1;
		}
		l++;
	}
	if (l!=4) check=1;
	return check;
}

int countBlow(char s1[], char s2[])
{
	int blow=0,i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if(j!=i && s1[j]==s2[i]) blow++;
		}
	}
	return blow;
}

int countHit(char s1[], char s2[])
{
	int hit=0,i;
	for (i=0;i<4;i++){
		if (s1[i]==s2[i]) hit++;
	}
	return hit;
}

void generateNumber(char theNumber[])
{
	int check=0,i=0;
	char num;
	while(theNumber[i]!=0){
		theNumber[i] = 0;
		i++;
	}
	do {
		for (i=0; i<4; i++) {
			num=rand()%10;
			num=num+'0';
			theNumber[i]=num;
		}
		check=checkString(theNumber);
	} while (check==1);
}
/*
int main()
{
	int check,blow,hit=0,count=0;
	char human[10],com[10]="abcdefg";
	srand((unsigned) time(NULL));
	generateNumber(com);
	while (hit!=4) {
		if (count!=0) {
			printf("  Hit : %d\n",hit);
			printf(" Blow : %d\n",blow);
		}
		do {
			puts("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢¡");
			gets(human);
			check=checkString(human);
		} while (check==1);
		hit = countHit(human,com);
		blow = countBlow(human,com);
		count++;
	}
	printf("%d‰ñ‚Ìs‚Åˆê’v‚µ‚Ü‚µ‚½\n",count);
	return 0;
}
*/

/**************** ÀsŒ‹‰Ê *****************

*******************************************/
