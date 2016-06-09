/***  p04ex11.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

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
    i=0;
    while (str1[i]!='\0') {
        if (str1[i]!=str2[i]) check=0;
        i++;
    };
    while (str2[i]!='\0') {
        if (str1[i]!=str2[i]) check=0;
        i++;
    };
    if (check==1){
        printf("%s %s => equal\n",str1,str2);
    } else {
        printf("%s %s => not equal\n",str1,str2);
    };
    return 0;
}


/**************** é¿çsåãâ  *****************

str1= robot
str2= robotics
robot robotics => not equal

str1= robotics
str2= robot
robotics robot => not equal

str1= robot
str2= robot
robot robot => equal

str1= time
str2= game
time game => not equal

*******************************************/
