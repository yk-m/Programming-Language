/***  p05ex08.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

void mid(char d[],char s[],int m,int n)
{
    int i=0,j;
    while(d[i]!=0){
        d[i] = 0;
        i++;
    }
    
    i = 0;
    for(j=0;j<n+1;j++){
        if (j+1>=m) {
            d[i]=s[j];
            i++;
        }
    }
}

int main()
{
    char str1[]="exercises";
    char str2[32]="abcdefghijklmn";
    char str3[32]="abcdefghijklmn";
    char str4[32]="abcdefghijklmn";
    puts(str1);
    mid(str2,str1,2,5);
    puts(str2);
    mid(str3,str1,2,10);
    puts(str3);
    mid(str4,str1,12,3);
    puts(str4);
    printf("%d\n",str4[0]);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

exercises
xerci
xercises

0

*******************************************/
