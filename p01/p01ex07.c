/***  p01ex07.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{

    int x,y,add,divide,surplus;
    
    printf("2�������--> ");
    scanf("%d %d",&x,&y);
    
    divide = x/y;
    surplus = x%y;
    
    printf("%d��%d=%d...%d\n",x,y,divide,surplus);
    return 0;
}


/**************** ���s���� *****************

2�������--> 17 7
17��7=2...3

2�������--> 23 7
23��7=3...2

*******************************************/
