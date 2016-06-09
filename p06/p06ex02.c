/***  p06ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

double movingAverage(int var)
{
	static int buffer[5]={0,0,0,0,0};
	static int putpos=0;
	double ave,sum=0.0;
	int i;
	buffer[putpos]=var;
	putpos++;
	if (putpos==5) putpos=0;
	
	for (i=0; i<5; i++){
		sum += buffer[i];
	}
	ave = sum/5;
	return ave;
}

int main()
{
	int x;
	double y;
	for(x=0;x<10;x++) {
		y=movingAverage(x);
		printf("x=%6d y=%10.2lf\n",x,y);
	}
	return 0;
}


/**************** ÀsŒ‹‰Ê *****************

x=     0 y=      0.00
x=     1 y=      0.20
x=     2 y=      0.60
x=     3 y=      1.20
x=     4 y=      2.00
x=     5 y=      3.00
x=     6 y=      4.00
x=     7 y=      5.00
x=     8 y=      6.00
x=     9 y=      7.00

*******************************************/
