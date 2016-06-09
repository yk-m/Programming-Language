/***  p02ex08.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>

int main()
{
    int row=0,col=0,i,j;
    printf("row,column= ");
    scanf("%d %d",&row,&col);
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/**************** é¿çsåãâ  *****************

row,column= 3 5
*****
*****
*****

row,column= 6 7
*******
*******
*******
*******
*******
*******

*******************************************/
