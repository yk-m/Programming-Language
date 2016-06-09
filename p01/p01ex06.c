/***  p01ex06.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>

int main()
{
    int x,y,add,subtract,multiply,divide,surplus;
    
    printf("2êîÇì¸óÕ--> ");
    scanf("%d %d",&x,&y);
    
    add = x+y;
    subtract = x-y;
    multiply = x*y;
    divide = x/y;
    surplus = x%y;
    
    printf("%d+%d=%d\n",x,y,add);
    printf("%d-%d=%d\n",x,y,subtract);
    printf("%d*%d=%d\n",x,y,multiply);
    printf("%d/%d=%d\n",x,y,divide);
    printf("%d%%%d=%d\n",x,y,surplus);
    return 0;
}


/**************** é¿çsåãâ  *****************

2êîÇì¸óÕ--> 12 5
12+5=17
12-5=7
12*5=60
12/5=2
12%5=2

2êîÇì¸óÕ--> 17 7
17+7=24
17-7=10
17*7=119
17/7=2
17%7=3

*******************************************/
