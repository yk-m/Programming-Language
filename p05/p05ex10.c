/***  p05ex10.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int checkString(char s[])
{
    int l=0,check=0,i;
    while(s[l]!=0){
        if (s[l]<48 || 57<s[l]) check=1;
        for (i=0;i<4;i++){
            if(l!=i && s[l]==s[i]) check=1;
        }
        l++;
    }
    if (l!=4) check=1;
    return check;
}

int main()
{
    int check;
    char s1[]="1234";
    char s2[]="123";
    char s3[]="12345";
    char s4[]="A123";
    char s5[]="123#";
    char s6[]="1231";
    
    check = checkString(s1);
    printf("%5s => %d\n",s1,check);
    check = checkString(s2);
    printf("%5s => %d\n",s2,check);
    check = checkString(s3);
    printf("%5s => %d\n",s3,check);
    check = checkString(s4);
    printf("%5s => %d\n",s4,check);
    check = checkString(s5);
    printf("%5s => %d\n",s5,check);
    check = checkString(s6);
    printf("%5s => %d\n",s6,check);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

 1234 => 0
  123 => 1
12345 => 1
 A123 => 1
 123# => 1
 1231 => 1

*******************************************/
