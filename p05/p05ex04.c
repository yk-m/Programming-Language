/***  p05ex04.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>


double average(int array[], int size)
{
    int i=0;
    double ave,sum=0.0;
    for (i=0; i<size; i++){
        sum += array[i];
    }
    ave = sum/(size-1);
    return ave;
}

int main()
{
    double ave;
    int array[100],size=0;
    do {
        size++;
        printf("データを入力 >> ");
        scanf("%d",&array[size]);
    } while (0<=array[size]);
    ave = average(array,size);
    printf("%lf\n",ave);
    return 0;
}


/**************** 実行結果 *****************

データを入力 >> 1
データを入力 >> 2
データを入力 >> 3
データを入力 >> 4
データを入力 >> 5
データを入力 >> 6
データを入力 >> 7
データを入力 >> 8
データを入力 >> 9
データを入力 >> 10
データを入力 >> -1
5.500000

データを入力 >> 1
データを入力 >> 2
データを入力 >> 3
データを入力 >> 4
データを入力 >> 5
データを入力 >> 6
データを入力 >> -1
3.500000

*******************************************/
