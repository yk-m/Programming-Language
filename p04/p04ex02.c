/***  p04ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int month, day,sum=0,count=1;
    int numberofdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("month day = ");
    scanf("%d %d",&month,&day);
    while(count<month){
        sum+=numberofdays[count];
        count++;
    };
    sum+=day;
    printf("%d\n",sum);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

month day = 1 25
25

month day = 3 2
61

*******************************************/
