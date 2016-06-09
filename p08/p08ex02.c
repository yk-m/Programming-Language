/***  p08ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

typedef struct {
	int numerator; /*•ªq*/
	int denominator; /*•ª•ê*/
} fraction_t;

fraction_t reduceFraction(fraction_t fraction)
{
	int x=fraction.numerator;
	int y=fraction.denominator;
	int r,check=1,check2=1;
	
	if (x < 0) {
		check = 0;
		x = -x;
		fraction.numerator = -fraction.numerator;
	}
	if (y < 0) {
		check2 = 0;
		y = -y;
		fraction.denominator = -fraction.denominator;
	}
	/*ƒ†[ƒNƒŠƒbƒh‚ÌŒİœ–@‚ÅÅ‘åŒö–ñ”‚ğ‹‚ß‚é*/
	r=x%y;
	while (r!=0) {
		x=y;
		y=r;
		r=x%y;
	}
	/*ƒ†[ƒNƒŠƒbƒh‚ÌŒİœ–@‚¨‚µ‚Ü‚¢@‚±‚Ì“_‚Åy‚ªÅ‘åŒö–ñ”*/
	
	fraction.numerator/=y;
	fraction.denominator/=y;
	
	if (check == 0 && check2 == 0) {
	} else if (check == 0 || check2 == 0) {
		fraction.numerator = -fraction.numerator;
	}
	
	return fraction;
}

fraction_t addFraction(fraction_t a,fraction_t b)
{
	fraction_t addfrc;
	
	a.numerator = a.numerator * b.denominator;
	b.numerator = b.numerator * a.denominator;
	
	addfrc.numerator = a.numerator + b.numerator;
	addfrc.denominator = a.denominator * b.denominator;
	addfrc = reduceFraction(addfrc);
	return addfrc;
}

fraction_t subtractFraction(fraction_t a,fraction_t b)
{
	fraction_t subtractfrc;
	
	a.numerator = a.numerator * b.denominator;
	b.numerator = b.numerator * a.denominator;
	
	subtractfrc.numerator = a.numerator - b.numerator;
	subtractfrc.denominator = a.denominator * b.denominator;
	subtractfrc = reduceFraction(subtractfrc);
	return subtractfrc;
}

fraction_t multiplyFraction(fraction_t a,fraction_t b)
{
	fraction_t multiplyfrc;
	multiplyfrc.numerator = a.numerator * b.numerator;
	multiplyfrc.denominator = a.denominator * b.denominator;
	multiplyfrc = reduceFraction(multiplyfrc);
	return multiplyfrc;
}

fraction_t divideFraction(fraction_t a,fraction_t b)
{
	fraction_t dividefrc;
	dividefrc.numerator = a.numerator * b.denominator;
	dividefrc.denominator = a.denominator * b.numerator;
	dividefrc = reduceFraction(dividefrc);
	return dividefrc;
}

int main()
{
	int bunbo,bunshi;
	fraction_t a,b;
	fraction_t addfrc,subtractfrc,multiplyfrc,dividefrc,asubtractfrc,adividefrc;
	
	printf("a = ");
	scanf("%d/%d",&bunshi,&bunbo);
	a.numerator = bunshi;
	a.denominator = bunbo;
	printf("b = ");
	scanf("%d/%d",&bunshi,&bunbo);
	b.numerator = bunshi;
	b.denominator = bunbo;
	
	addfrc=addFraction(a,b);
	subtractfrc=subtractFraction(a,b);
	multiplyfrc=multiplyFraction(a,b);
	dividefrc=divideFraction(a,b);
	asubtractfrc=subtractFraction(b,a);
	adividefrc=divideFraction(b,a);
	
	printf("%d/%d { %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,addfrc.numerator,addfrc.denominator);
	printf("%d/%d | %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,subtractfrc.numerator,subtractfrc.denominator);
	printf("%d/%d ~ %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,multiplyfrc.numerator,multiplyfrc.denominator);
	printf("%d/%d € %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,dividefrc.numerator,dividefrc.denominator);
	printf("%d/%d | %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,asubtractfrc.numerator,asubtractfrc.denominator);
	printf("%d/%d € %d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,adividefrc.numerator,adividefrc.denominator);
	return 0;
}


/**************** ÀsŒ‹‰Ê *****************

a = 1/6
b = 1/3
1/6 { 1/3 = 1/2
1/6 | 1/3 = -1/6
1/6 ~ 1/3 = 1/18
1/6 € 1/3 = 1/2
1/6 | 1/3 = 1/6
1/6 € 1/3 = 2/1

a = 1/6
b = -1/3
1/6 { -1/3 = -1/6
1/6 | -1/3 = 1/2
1/6 ~ -1/3 = -1/18
1/6 € -1/3 = -1/2
1/6 | -1/3 = -1/2
1/6 € -1/3 = -2/1

a = -1/6
b = 1/3
-1/6 { 1/3 = 1/6
-1/6 | 1/3 = -1/2
-1/6 ~ 1/3 = -1/18
-1/6 € 1/3 = -1/2
-1/6 | 1/3 = 1/2
-1/6 € 1/3 = -2/1

-1/6 { -1/3 = -1/2
-1/6 | -1/3 = 1/6
-1/6 ~ -1/3 = 1/18
-1/6 € -1/3 = 1/2
-1/6 | -1/3 = -1/6
-1/6 € -1/3 = 2/1

a = 3/4
b = 16/3
3/4 { 16/3 = 73/12
3/4 | 16/3 = -55/12
3/4 ~ 16/3 = 4/1
3/4 € 16/3 = 9/64
3/4 | 16/3 = 55/12
3/4 € 16/3 = 64/9

a = 3/4
b = -16/3
3/4 { -16/3 = -55/12
3/4 | -16/3 = 73/12
3/4 ~ -16/3 = -4/1
3/4 € -16/3 = -9/64
3/4 | -16/3 = -73/12
3/4 € -16/3 = -64/9

a = -3/4
b = -16/3
-3/4 { -16/3 = -73/12
-3/4 | -16/3 = 55/12
-3/4 ~ -16/3 = 4/1
-3/4 € -16/3 = 9/64
-3/4 | -16/3 = -55/12
-3/4 € -16/3 = 64/9

*******************************************/
