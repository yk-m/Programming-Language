/***  p03ex06.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
	int n;
	printf("n = ");
	scanf("%d",&n);
	if (n%6==0) {
		printf("6�̔{��\n");
	} else if (n%3==0) {
		printf("3�̔{������2�̔{���ł͂Ȃ�\n");
	} else if (n%2==0) {
		printf("2�̔{������3�̔{���ł͂Ȃ�\n");
	} else {
		printf("2�̔{���ł�3�̔{���ł��Ȃ�\n");
	};
	return 0;
}


/**************** ���s���� *****************

n = 38
2�̔{������3�̔{���ł͂Ȃ�

n = 42
6�̔{��

n = 53
2�̔{���ł�3�̔{���ł��Ȃ�

n = 63
3�̔{������2�̔{���ł͂Ȃ�

*******************************************/