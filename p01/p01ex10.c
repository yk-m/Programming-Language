/***  p01ex10.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int x;
    printf("x = ");
    scanf("%d",&x);
    
    printf("100->%d\n",(x/100)%10);
    printf("010=>%d\n",(x/10)%10);
    printf("001=>%d\n",x%10);
    return 0;
}


/**************** ���s���� *****************

x = 258
100->2
010=>5
001=>8

x = 5369
100->3
010=>6
001=>9

x = 7
100->0
010=>0
001=>7

*******************************************/
