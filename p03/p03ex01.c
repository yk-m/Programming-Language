/***  p03ex01.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int number;
    printf("number = ");
    scanf("%d",&number);
    if (number%2==0) {
        printf("%d is even number.\n");
    }
    return 0;
}


/**************** ���s���� *****************

number = 1

number = 2
2 is even number.

number = 3

number = 4
4 is even number.

number = 5

*******************************************/
