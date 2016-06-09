/***  p04ex09.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{
    int i,check;
    char str1[100],str2[100];
    printf("str1= ");
    gets(str1);
    printf("str2= ");
    gets(str2);
    check = 1;
    for (i=0;i<3;i++){
        if (str1[i]!=str2[i]) check=0;
    };
    if (check==1){
        printf("%s %s => equal\n",str1,str2);
    } else {
        printf("%s %s => not equal\n",str1,str2);
    };
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

str1= robot
str2= root
robot root => not equal

str1= speaker
str2= speech
speaker speech => equal

str1= time
str2= game
time game => not equal

str1= misosiru
str2= misosoup
misosiru misosoup => equal

str1= apple
str2= orange
apple orange => not equal

*******************************************/
