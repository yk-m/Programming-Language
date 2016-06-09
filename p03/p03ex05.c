/***  p03ex01.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>

int main()
{
    double x,sum,ave,counter;
    sum = 0;
    ave = 0;
    printf("x = ");
    scanf("%lf",&x);
    if (x<=0) {
        printf("合計値と平均値が求められません\n");
    } else {
        while (0<=x) {
            sum = sum+x;
            counter++;
            printf("x = ");
            scanf("%lf",&x);
        };
        ave =  sum/counter;
        printf("合計 = %.0f\n",sum);
        printf("平均 = %.1f\n",ave);
    };
    return 0;
}


/**************** 実行結果 *****************

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
合計 = 55
平均 = 5.5

x = 1
x = 2
x = 3
x = 4
x = 5
x = -1
合計 = 15
平均 = 3.0

x = -1
合計値と平均値が求められません

*******************************************/
