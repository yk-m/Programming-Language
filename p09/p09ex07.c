/***  p09ex07.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

typedef struct {
	int hour; /*���Ԃ�\��*/
	int min; /*����\��*/
	int sec; /*�b��\��*/
} hmstime_t;

hmstime_t addTime(hmstime_t *t1, hmstime_t *t2);

int main()
{
	hmstime_t t1={2,46,27};
	hmstime_t t2={1,34,34};
	hmstime_t t3;
	hmstime_t t4={2,46,27};
	hmstime_t t5={1,13,34};
	hmstime_t t6;
	t3=addTime(&t1,&t2);
	t6=addTime(&t4,&t5);
	printf("%2d:%2d:%2d\n",t3.hour,t3.min,t3.sec);
	printf("%2d:%2d:%2d\n",t6.hour,t6.min,t6.sec);
	return 0;
}

hmstime_t addTime(hmstime_t *t1, hmstime_t *t2)
{
	int *p,i,n=0;
	hmstime_t t3={0,0,0};
	t3.sec = t1->sec + t2->sec;
	if(t3.sec>60){
		t3.sec = t3.sec - 60;
		n = 1;
	}
	t3.min = t1->min + t2->min;
	if(n==1) t3.min++;
	if(t3.min>60){
		t3.min = t3.min - 60;
		n = 1;
	}
	t3.hour = t1->hour + t2->hour;
	if(n==1) t3.hour++;
	return t3;
}

/**************** ���s���� *****************

 4:21: 1
 4:60: 1

*******************************************/
