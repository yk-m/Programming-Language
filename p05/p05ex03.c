/***  p05ex03.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>
#include <math.h>


double heronformula(double a,double b,double c)
{
    double s,p,area;
    s=(a+b+c)/2;
    p=(s-a)*(s-b)*(s-c)*s;
    if (p<0){
        return 0.0;
    } else {
        area=sqrt(p);
        return area;
    }
}


int main()
{
    double a,b,c,area;
    a=3.0;
    b=4.0;
    c=5.0;
    area=heronformula(a,b,c);
    printf("a,b,c,area=%lf, %lf, %lf, %lf\n",a,b,c,area);
    a=3.0;
    b=4.0;
    c=8.0;
    area=heronformula(a,b,c);
    printf("a,b,c,area=%lf, %lf, %lf, %lf\n",a,b,c,area);
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

a,b,c,area=3.000000, 4.000000, 5.000000, 6.000000
a,b,c,area=3.000000, 4.000000, 8.000000, 0.000000

*******************************************/
