/***  p04ex01.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int i,count;
    int score[10]={15,8,12,18,20,20,9,16,20,17};
    for (i=0;i<10;i++){
        count=0;
        printf("%2d %2d :",i+1,score[i]);
        while(count<score[i]){
            count++;
            if (count%5==0){
                printf("|");
            } else {
                printf("*");
            };
        };
        printf("\n");
    };
    return 0;
}


/**************** ���s���� *****************

 1 15 :****|****|****|
 2  8 :****|***
 3 12 :****|****|**
 4 18 :****|****|****|***
 5 20 :****|****|****|****|
 6 20 :****|****|****|****|
 7  9 :****|****
 8 16 :****|****|****|*
 9 20 :****|****|****|****|
10 17 :****|****|****|**

*******************************************/