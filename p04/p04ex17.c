/***  p04ex17.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int testdata[20],i;
    for (i=0;i<20;i++) testdata[i]=0;
    for (i=2*2;i<20;i=i+2) testdata[i]=1;
    for (i=3*2;i<20;i=i+3) testdata[i]=1;
    for(i=0;i<20;i++) printf("%d",testdata[i]);
    printf("\n");
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

00001010111010111010

*******************************************/
