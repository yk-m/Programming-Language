/***  p05ex15.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>
#include <stdlib.h>

int num[10][10][10][10];
int numex[4]= {0,1,2,3};

int game();

void resetNum();
void putNum();
void changeNum(int s, int numcheck[]);
int checkNum();
int checkOKnum();
int trynum();
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
	while (game());
}

int game()
{
	int blow=0,hit=0,checknum=0,count=0, i=0;
	int check,blowh,hith=0,counth=0;
	char human[10],com[10];
	
	srand((unsigned) time(NULL));
	resetNum();
	generateNumber(com);
	
	while (checknum == 0 && hith!=4) {
		if (count!=0) {
			if (trynum()) {
				printf("入力された値に誤りがあります．最初からやり直します．\n\n");
				return 1;
			}
		}
		count++;
		printf("%d回目\n",count);
		
		printf("あなたの番です。数値を入力してください｡\n");
		do {
			printf(" 数値 : ");
			scanf("%s", human);
			check=checkString(human);
		} while (check==1);
		hith = countHit(human,com);
		blowh = countBlow(human,com);
		printf("  Hit : %d\n",hith);
		printf(" Blow : %d\n",blowh);
		if (hith==4) break;
		
		printf("わたしの番です。");
		printf("%d%d%d%dのヒット数とブロー数を入力してください．\n",numex[0],numex[1],numex[2],numex[3]);
		do {
			printf("  Hit : ");
			scanf("%d",&hit);
			printf(" Blow : ");
			scanf("%d",&blow);
		} while (!(hit<5 && blow<5));
		checkHandB(hit,blow);
		checknum = checkNum();
	}
	
	if (checknum !=0){
		if (checknum == 1) {
			printf("入力された値に誤りがあります．最初からやり直します．\n\n");
			return 1;
		} else {
			printf("私の勝ちです。");
			if (checknum < 1000) {
				printf("答えは0%dです。\n",checknum);
			} else {
				printf("答えは%dです。\n",checknum);
			}
			return 0;
		}
	} else {
		printf("あなたの勝ちです。%d回の試行で一致しました。\n",count);
		return 0;
	}
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
	if (count1 == 1) {
		return now;
	} else if (count1 == 0) {
		return 1;
	}
	return 0;
}

int checkOKnum()
{
	int i;
	for (i=0;i<10000;i++){
		if(checkStringInt(numex) == 1) {
			return 1;
		}
	}
	return 0;
}

int trynum()
{
	int zero,i,j,sum;
	int checki[4];
	int countA=0, countB=0;
	num[numex[0]][numex[1]][numex[2]][numex[3]] = 0;
	for (i=0;i<10000;i++){
		changeNum(i,checki);
		if(num[checki[0]][checki[1]][checki[2]][checki[3]] == 1) {
			for (j=0;j<4;j++) {
				numex[j] = checki[j];
			}
			return 0;
		}
	}
	return 1;
}

int checkStringInt(int s[])
{
	int check=0,i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if(j!=i && s[i]==s[j]) return 1;
		}
	}
	return 0;
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
	static int countHB = 0;
	for (i=0;i<10000;i++){
		changeNum(i,numi);
		if(checkStringInt(numi) == 0) {
			blow = countBlowInt(numi);
			hit  = countHitInt(numi);
			if (countHB == 0) {
				if (h==hit && b==blow) {
					num[numi[0]][numi[1]][numi[2]][numi[3]] = 1;
				}
			} else {
				if (h!=hit || b!=blow) {
					num[numi[0]][numi[1]][numi[2]][numi[3]] = 0;
				}
			}
		}
	}
	countHB++;
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

/**************** 実行結果 *****************

1回目
あなたの番です。数値を入力してください｡
 数値 : 1234
  Hit : 0
 Blow : 1
わたしの番です。0123のヒット数とブロー数を入力してください．
  Hit : 2
 Blow : 0
2回目
あなたの番です。数値を入力してください｡
 数値 : 3214
  Hit : 0
 Blow : 1
わたしの番です。0145のヒット数とブロー数を入力してください．
  Hit : 4
 Blow : 0
私の勝ちです。答えは0145です。

*******************************************/
