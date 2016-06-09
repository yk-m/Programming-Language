/***  p05ex14.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
            puts("数値を入力してください｡");
            gets(human);
            check=checkString(human);
        } while (check==1);
        hit = countHit(human,com);
        blow = countBlow(human,com);
        count++;
    }
    printf("%d回の試行で一致しました\n",count);
    return 0;
}


/**************** 実行結果 *****************

0123
  Hit : 0
 Blow : 2
数値を入力してください｡
1234
  Hit : 0
 Blow : 3
数値を入力してください｡
2345
  Hit : 3
 Blow : 0
数値を入力してください｡
2346
4回の試行で一致しました

*******************************************/
