/***  p02ex14.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int count;
    double x,ave,sum;
    sum = 0;
    ave = 0;
    for (count=0; count<10; count++) {
        printf("x = ");
        scanf("%lf",&x);
        sum = sum+x;
    }
    printf("���v = %.0f\n",sum);
    ave = sum/10;
    printf("���� = %.1f\n",ave);
    return 0;
}


/**************** ���s���� *****************

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
���v = 55
���� = 5.5

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
���v = 155
���� = 15.5

*******************************************/
