/***  p04ex08.c  ***/
/***  s12169  2J34  èºîˆóSâ¿  ***/

#include <stdio.h>

int main()
{
    int check;
    char str1[100],str2[100];
    printf("str1= ");
    gets(str1);
    printf("str2= ");
    gets(str2);
    check = 1;
    if (str1[0]!=str2[0]){
        check=0;
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
str2= atom
robot atom => not equal

str1= robot
str2= rocket
robot rocket => equal

str1= misosiru
str2= misosoup
misosiru misosoup => equal

str1= orange
str2= apple
orange apple => not equal

str1= miyazawa
str2= tanizaki
miyazawa tanizaki => not equal

*******************************************/
