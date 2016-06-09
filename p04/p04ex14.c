/***  p04ex14.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int dayNumber;
    char dayofweek[7][20]={
        "Sunday","Monday","Tuesday","Wednesday","Thursday","Fryday","Saturday"
    };
    printf("number = ");
    scanf("%d",&dayNumber);
    puts(dayofweek[dayNumber-1]);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

number = 1
Sunday

number = 2
Monday

number = 3
Tuesday

number = 4
Wednesday

number = 5
Thursday

number = 6
Fryday

number = 7
Saturday

*******************************************/
