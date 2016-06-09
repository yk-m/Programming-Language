/***  p05ex07.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void right(char d[],char s[],int n)
{
    int i=0,j=0,k=0;
    while(d[j]!=0){
        d[j] = 0;
        j++;
    }
    while(s[i]!=0){
        i++;
    }
    j=0;
    if (n<i){
        for(k=0;k<=n;k++){
            if (s[i-n]!=0) {
                d[j] = s[i-n];
                j++;
            }
            i++;
        }
    }
    if (n>=i){
        while (s[j]!=0){
            d[j]=s[j];
            j++;
        }
    }
}

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    char str3[32]="abcdefghijklmn";
    right(str2,str1,5);
    puts(str2);
    right(str3,str1,10);
    puts(str3);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

cises
exercises

*******************************************/
