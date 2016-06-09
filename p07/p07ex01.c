/***  p07ex01.c  ***/
/***  s12169  2J34  �����S��  ***/

#include <stdio.h>

int main()
{
	int x,x2,x3;
	FILE *fp;
	fp=fopen("myfile.txt","w");
	if (fp==NULL) {
		printf("can't open a file\n");
		exit(1);
	}
	fprintf(fp,"  x  x^2     x^3\n");
	for(x=1;x<=100;x++) {
		x2 = x*x;
		x3 = x*x*x;
		fprintf(fp,"%3d %4d %7d\n",x,x2,x3);
	}
	fclose(fp);
	return 0;
}


/**************** ���s���� *****************

  x  x^2     x^3
  1    1       1
  2    4       8
  3    9      27
  4   16      64
  5   25     125
  6   36     216
  7   49     343
  8   64     512
  9   81     729
 10  100    1000
 11  121    1331
 12  144    1728
 13  169    2197
 14  196    2744
 15  225    3375
 16  256    4096
 17  289    4913
 18  324    5832
 19  361    6859
 20  400    8000
 21  441    9261
 22  484   10648
 23  529   12167
 24  576   13824
 25  625   15625
 26  676   17576
 27  729   19683
 28  784   21952
 29  841   24389
 30  900   27000
 31  961   29791
 32 1024   32768
 33 1089   35937
 34 1156   39304
 35 1225   42875
 36 1296   46656
 37 1369   50653
 38 1444   54872
 39 1521   59319
 40 1600   64000
 41 1681   68921
 42 1764   74088
 43 1849   79507
 44 1936   85184
 45 2025   91125
 46 2116   97336
 47 2209  103823
 48 2304  110592
 49 2401  117649
 50 2500  125000
 51 2601  132651
 52 2704  140608
 53 2809  148877
 54 2916  157464
 55 3025  166375
 56 3136  175616
 57 3249  185193
 58 3364  195112
 59 3481  205379
 60 3600  216000
 61 3721  226981
 62 3844  238328
 63 3969  250047
 64 4096  262144
 65 4225  274625
 66 4356  287496
 67 4489  300763
 68 4624  314432
 69 4761  328509
 70 4900  343000
 71 5041  357911
 72 5184  373248
 73 5329  389017
 74 5476  405224
 75 5625  421875
 76 5776  438976
 77 5929  456533
 78 6084  474552
 79 6241  493039
 80 6400  512000
 81 6561  531441
 82 6724  551368
 83 6889  571787
 84 7056  592704
 85 7225  614125
 86 7396  636056
 87 7569  658503
 88 7744  681472
 89 7921  704969
 90 8100  729000
 91 8281  753571
 92 8464  778688
 93 8649  804357
 94 8836  830584
 95 9025  857375
 96 9216  884736
 97 9409  912673
 98 9604  941192
 99 9801  970299
100 10000 1000000

*******************************************/
