/***  p01ex08.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{

    double jotei,katei,takasa,menseki;
    printf("���[cm] = ");
    scanf("%lf",&jotei);
    printf("����[cm] = ");
    scanf("%lf",&katei);
    printf("����[cm] = ");
    scanf("%lf",&takasa);
    
    menseki = (jotei+katei)*takasa*0.5;
    printf("�ʐ�[cm2] = %4.3lf\n",menseki);
    
    return 0;
}


/**************** ���s���� *****************

���[cm] = 2.5
����[cm] = 3.2
����[cm] = 4.5
�ʐ�[cm2] = 12.825

���[cm] = 3.4
����[cm] = 2.4
����[cm] = 6.5
�ʐ�[cm2] = 18.850

���[cm] = 2.8
����[cm] = 3.7
����[cm] = 6.2
�ʐ�[cm2] = 20.150

���[cm] = 3.5
����[cm] = 1.2
����[cm] = 3.5
�ʐ�[cm2] = 8.225

*******************************************/
