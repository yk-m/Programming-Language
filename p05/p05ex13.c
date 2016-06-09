/***  p05ex13.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

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
    char aNumber[10]="abcdefg"; /*ŒŸØ‚Ì‚½‚ß‚ÉˆÓ–¡‚Ì‚È‚¢•¶š—ñ‚ğ‰Šú’l‚Æ‚·‚é*/
    int count;
    srand((unsigned) time(NULL));/*—”—ñ¶¬‚Ì‰Šú‰»*/
    for (count=0; count<10; count++) {
        generateNumber(aNumber);
        puts(aNumber);
    }
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

9367
9417
8653
9417
9540
1387
6238
0617
9671
8935

*******************************************/
