/***  p04ex07.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>

int main()
{
    int count=0,i=0;
    char mystring[200];
    gets(mystring);
    while ( mystring[i]!='\0' ) {
        if (mystring[i]=='e') {
            count++;
        };
        i++;
    }
    printf("%d\n",count);
    return 0;
}


/**************** é¿çsåãâ  *****************

abcdefg
1

I'm getting closer to my home.
3

Kunugidamachi Hachioji Tokyo
0

How It All Goes Down
1

a girl we never see.
5

*******************************************/
