/***  p01ex07.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{

    int x,y,add,divide,surplus;
    
    printf("2”‚ğ“ü—Í--> ");
    scanf("%d %d",&x,&y);
    
    divide = x/y;
    surplus = x%y;
    
    printf("%d€%d=%d...%d\n",x,y,divide,surplus);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

2”‚ğ“ü—Í--> 17 7
17€7=2...3

2”‚ğ“ü—Í--> 23 7
23€7=3...2

*******************************************/
