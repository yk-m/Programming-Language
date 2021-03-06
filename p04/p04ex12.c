/***  p04ex12.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,check;
    char sNumber[10];
    printf("２Ｊの出席番号を入力してください >> ");
    gets(sNumber);
    while (strcmp(sNumber, "zzzz") != 0){
        check = 1;
        i=0;
        while (sNumber[i]!='\0'){
            i++;
        };
        if (i!=4) check = 0;
        
        if (sNumber[0]!='2') check = 0;
        if (sNumber[1]!='J') check = 0;
        
        i =(sNumber[2]-'0')*10+(sNumber[3]-'0');
        if (1>i || i>49) check = 0;
        if (check==1){
            printf("%s => correct\n",sNumber);
        } else {
            printf("%s => incorrect\n",sNumber);
        };
        
        printf("２Ｊの出席番号を入力してください >> ");
        gets(sNumber);
    };
    return 0;
}


/**************** 実行結果 *****************

２Ｊの出席番号を入力してください >> 2J01
2J01 => correct
２Ｊの出席番号を入力してください >> 2J13
2J13 => correct
２Ｊの出席番号を入力してください >> 2J29
2J29 => correct
２Ｊの出席番号を入力してください >> 2J30
2J30 => correct
２Ｊの出席番号を入力してください >> 2J49
2J49 => correct
２Ｊの出席番号を入力してください >> 2J1
2J1 => incorrect
２Ｊの出席番号を入力してください >> 2J9
2J9 => incorrect
２Ｊの出席番号を入力してください >> 2J50
2J50 => incorrect
２Ｊの出席番号を入力してください >> 2J123
2J123 => incorrect
２Ｊの出席番号を入力してください >> 2J00
2J00 => incorrect
２Ｊの出席番号を入力してください >> 2J
2J => incorrect
２Ｊの出席番号を入力してください >> zzzz

*******************************************/
