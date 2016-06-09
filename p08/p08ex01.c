/***  p08ex01.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>
#include <math.h>

typedef struct {
	int x; /*x���W*/
	int y; /*y���W*/
} point_t;

point_t rotatePoint(point_t point, double theta)
{
	point_t newpoint;
	newpoint.x= point.x*cos(theta) - point.y*sin(theta);
	newpoint.y= point.x*sin(theta) + point.y*cos(theta);
	return newpoint;
}

int main()
{
	double angle,theta;
	double PI = 3.14159265358979323846;
	point_t point={100,100};
	point_t newpoint;
	printf("angle = ");
	scanf("%lf",&angle);
	theta = (angle/180.0) * PI;
	newpoint = rotatePoint(point, theta);
	printf("theta = %.0f, (%d,%d)\n",theta,newpoint.x,newpoint.y);
	return 0;
}


/**************** ���s���� *****************

angle = 45
theta = 1, (0,141)

angle = -45
theta = -1, (141,0)

*******************************************/
