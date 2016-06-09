/***  p10ex01.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int factorial(int n)
{
	int fact;
	if(n==0){
		fact = 1;
	} else {
		fact = factorial(n-1) * n;
	}
	return fact;
}

int main()
{
	int i;
	int fact;
	for (i=1; i<=12; i++) {
		fact=factorial(i);
		printf("factorial(%d)=%d\n",i,fact);
	}
}


/**************** ÀsŒ‹‰Ê *****************

factorial(1)=1
factorial(2)=2
factorial(3)=6
factorial(4)=24
factorial(5)=120
factorial(6)=720
factorial(7)=5040
factorial(8)=40320
factorial(9)=362880
factorial(10)=3628800
factorial(11)=39916800
factorial(12)=479001600

*******************************************/
