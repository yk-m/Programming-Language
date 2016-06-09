/***  p03ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int number;
    printf("number = ");
    scanf("%d",&number);
    if (number%2==0) {
        printf("%d is even number.\n");
    } else {
        printf("%d is odd number.\n");
    }
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

number = 1
1 is odd number.

number = 2
2 is even number.

number = 3
3 is odd number.

number = 4
4 is even number.

number = 5
5 is odd number.

*******************************************/
