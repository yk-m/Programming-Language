/***  p03ex01.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    double x,sum,ave,counter;
    sum = 0;
    ave = 0;
    printf("x = ");
    scanf("%lf",&x);
    if (x<=0) {
        printf("���v�l�ƕ��ϒl�����߂��܂���\n");
    } else {
        while (0<=x) {
            sum = sum+x;
            counter++;
            printf("x = ");
            scanf("%lf",&x);
        };
        ave =  sum/counter;
        printf("���v = %.0f\n",sum);
        printf("���� = %.1f\n",ave);
    };
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
x = -1
���v = 55
���� = 5.5

x = 1
x = 2
x = 3
x = 4
x = 5
x = -1
���v = 15
���� = 3.0

x = -1
���v�l�ƕ��ϒl�����߂��܂���

*******************************************/
