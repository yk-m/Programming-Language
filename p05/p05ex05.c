/***  p05ex05.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void reverse(int array[], int size)
{
    int cent,tem,i;
    cent = size/2;
    for (i=0; i<cent; i++){
        tem = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = tem;
    }
}

int main()
{
    int i;
    int array[] = {1,2,3,11,12,13,21,22,23,100};
    reverse(array,10);
    for(i=0;i<10;++i) printf("%d ",array[i]);
    printf("\n");
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

100 23 22 21 13 12 11 3 2 1

*******************************************/
