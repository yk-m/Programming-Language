/***  p05ex09.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void reverseString(char s[])
{
    int l=0,i;
    char re[50];
    while(s[l]!=0){
        l++;
    }
    for(i=0;i<l;i++){
        re[l-i-1]=s[i];
    }
    for(i=0;i<l;i++){
        s[i]=re[i];
    }
}

int main()
{
    char str[]="exercises";
    puts(str);
    reverseString(str);
    puts(str);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

exercises
sesicrexe

*******************************************/
