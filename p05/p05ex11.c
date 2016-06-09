/***  p05ex11.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int countHit(char s1[], char s2[])
{
    int check=0,i;
    for (i=0;i<4;i++){
        if (s1[i]==s2[i]) check++;
    }
    return check;
}

int main()
{
    int check;
    char s0[]="1234";
    char s1[]="9837", s2[]="9817", s3[]="1837", s4[]="1834", s5[]="1234";
    check = countHit(s0,s1);
    printf("%s %s => %d\n",s0,s1,check);
    check = countHit(s0,s2);
    printf("%s %s => %d\n",s0,s2,check);
    check = countHit(s0,s3);
    printf("%s %s => %d\n",s0,s3,check);
    check = countHit(s0,s4);
    printf("%s %s => %d\n",s0,s4,check);
    check = countHit(s0,s5);
    printf("%s %s => %d\n",s0,s5,check);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

1234 9837 => 1
1234 9817 => 0
1234 1837 => 2
1234 1834 => 3
1234 1234 => 4

*******************************************/
