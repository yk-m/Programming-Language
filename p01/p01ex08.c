/***  p01ex08.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

int main()
{

    double jotei,katei,takasa,menseki;
    printf("ã’ê[cm] = ");
    scanf("%lf",&jotei);
    printf("‰º’ê[cm] = ");
    scanf("%lf",&katei);
    printf("‚‚³[cm] = ");
    scanf("%lf",&takasa);
    
    menseki = (jotei+katei)*takasa*0.5;
    printf("–ÊÏ[cm2] = %4.3lf\n",menseki);
    
    return 0;
}


/**************** ÀsŒ‹‰Ê *****************

ã’ê[cm] = 2.5
‰º’ê[cm] = 3.2
‚‚³[cm] = 4.5
–ÊÏ[cm2] = 12.825

ã’ê[cm] = 3.4
‰º’ê[cm] = 2.4
‚‚³[cm] = 6.5
–ÊÏ[cm2] = 18.850

ã’ê[cm] = 2.8
‰º’ê[cm] = 3.7
‚‚³[cm] = 6.2
–ÊÏ[cm2] = 20.150

ã’ê[cm] = 3.5
‰º’ê[cm] = 1.2
‚‚³[cm] = 3.5
–ÊÏ[cm2] = 8.225

*******************************************/
