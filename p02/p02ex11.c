/***  p02ex11.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
    int i,j,x;
    printf("   1  2  3  4  5  6  7  8  9\n");
    for (i=1; i<10; i++) {
        printf("%d",i);
        for (j=1; j<10; j++) {
            x = i;
            x = x*j;
            printf(" %2d",x);
        }
        printf("\n");
    }
    return 0;
}

/**************** ���s���� *****************

   1  2  3  4  5  6  7  8  9
1  1  2  3  4  5  6  7  8  9
2  2  4  6  8 10 12 14 16 18
3  3  6  9 12 15 18 21 24 27
4  4  8 12 16 20 24 28 32 36
5  5 10 15 20 25 30 35 40 45
6  6 12 18 24 30 36 42 48 54
7  7 14 21 28 35 42 49 56 63
8  8 16 24 32 40 48 56 64 72
9  9 18 27 36 45 54 63 72 81

*******************************************/
