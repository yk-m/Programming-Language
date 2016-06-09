/***  p04ex13.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>

int main()
{
    int pos=0,countA=0,countI=0,countU=0,countE=0,countO=0;
    char string[500];
    puts("文字列を入力してください");
    gets(string);
    while (string[pos]!='\0'){
        if (string[pos]=='a' || string[pos]=='A') countA++;
        if (string[pos]=='e' || string[pos]=='E') countE++;
        if (string[pos]=='i' || string[pos]=='I') countI++;
        if (string[pos]=='o' || string[pos]=='O') countO++;
        if (string[pos]=='u' || string[pos]=='U') countU++;
        pos++;
    };
    puts("入力された文字列は次のものです。");
    puts(string);
    puts("集計結果");
    printf("number of vowels A,a= %d\n",countA);
    printf("number of vowels E,e= %d\n",countE);
    printf("number of vowels I,i= %d\n",countI);
    printf("number of vowels O,o= %d\n",countO);
    printf("number of vowels U,u= %d\n",countU);
    return 0;
}


/**************** 実行結果 *****************

文字列を入力してください
Over this year, I have seen many Japanese entertainment show on television that
are obviously supposed to make people laugh and have a good time. However, some
of these shows are not funny at all.
入力された文字列は次のものです。
Over this year, I have seen many Japanese entertainment show on television that
are obviously supposed to make people laugh and have a good time. However, some
of these shows are not funny at all.
集計結果
number of vowels A,a= 16
number of vowels E,e= 25
number of vowels I,i= 7
number of vowels O,o= 16
number of vowels U,u= 4

*******************************************/
