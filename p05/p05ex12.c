/***  p05ex12.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int countBlow(char s1[], char s2[])
{
    int check=0,i,j;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if(j!=i && s1[j]==s2[i]) check++;
        }
    }
    return check;
}

int main()
{
    int check;
    char s0[]="1234";
    char s1[]="9387", s2[]="9807", s3[]="0391", s4[]="4213", s5[]="4312";
    check = countBlow(s0,s1);
    printf("%s %s => %d\n",s0,s1,check);
    check = countBlow(s0,s2);
    printf("%s %s => %d\n",s0,s2,check);
    check = countBlow(s0,s3);
    printf("%s %s => %d\n",s0,s3,check);
    check = countBlow(s0,s4);
    printf("%s %s => %d\n",s0,s4,check);
    check = countBlow(s0,s5);
    printf("%s %s => %d\n",s0,s5,check);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

1234 9387 => 1
1234 9807 => 0
1234 0391 => 2
1234 4213 => 3
1234 4312 => 4

*******************************************/
