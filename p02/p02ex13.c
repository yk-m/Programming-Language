/***  p02ex13.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int x,count,sum;
    sum = 0;
    for (count=0; count<10; count++) {
        printf("x = ");
        scanf("%d",&x);
        sum = sum+x;
    }
    printf("sum = %d\n",sum);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

x = 1
x = 2
x = 3
x = 4
x = 5
x = 6
x = 7
x = 8
x = 9
x = 10
sum = 55

x = 11
x = 12
x = 13
x = 14
x = 15
x = 16
x = 17
x = 18
x = 19
x = 20
sum = 155

*******************************************/
