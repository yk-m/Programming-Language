/***  p10ex02.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>

char board[8][8];

void printBoard(void)
{
	int i,j;
	static int found=0;
	printf("\n#%d is found.\n",++found);
	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			if (board[i][j]==0) printf(" o");
			if (board[i][j]==1) printf(" Q");
		}
		printf("\n");
	}
}

void columnwork(int column)
{
	int row;
	int status,i;
	// static int found2=0;
	if (column==8) {
		printBoard();
		return;
	}
	for (row=0; row<8; row++) {
		
		status = 1;
		for (i=1;(i<=column && status == 1);i++){
			if (board[row+i][column-i]==1 && (row+i)<=7) status = 0;
			if (board[row][column-i]==1) status = 0;
			if (board[row-i][column-i]==1 && (row-i)>=0) status = 0;
		}

		if (status==1) {

			board[row][column] = 1;
			columnwork(column+1);
			
			board[row][column] = 0;
		}
	}
}

void initBoard(void)
{
	int i,j;
	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			board[i][j]=0;
		}
	}
}

int main()
{
	initBoard();
	columnwork(0);/*Å‰‚Í‘æ0—ñ‚©‚çì‹Æ‚ğŠJn*/
	return 0;
}


/**************** ÀsŒ‹‰Ê *****************

#1 is found.
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 o o o o o Q o o
 o o Q o o o o o

#2 is found.
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o
 o o Q o o o o o

#3 is found.
 Q o o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o Q o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o Q o o o o o o
 o o o o Q o o o

#4 is found.
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o

#5 is found.
 o o o o o Q o o
 Q o o o o o o o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q
 o o Q o o o o o
 o o o o o o Q o
 o o o Q o o o o

#6 is found.
 o o o Q o o o o
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o

#7 is found.
 o o o o Q o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o

#8 is found.
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 o o o o o Q o o

#9 is found.
 o o o o Q o o o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o

#10 is found.
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o Q o o o

#11 is found.
 o o o o Q o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o

#12 is found.
 o o o Q o o o o
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o

#13 is found.
 o Q o o o o o o
 o o o o o Q o o
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o o o o o o o Q
 o o Q o o o o o
 o o o o Q o o o

#14 is found.
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o

#15 is found.
 o o o o o o o Q
 o o Q o o o o o
 Q o o o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o Q o
 o o o Q o o o o

#16 is found.
 o o o Q o o o o
 o o o o o Q o o
 Q o o o o o o o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q
 o o Q o o o o o
 o o o o o o Q o

#17 is found.
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o

#18 is found.
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o

#19 is found.
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 o o o o o o Q o

#20 is found.
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o Q o o o o o o
 o o o Q o o o o
 o o o o o o Q o

#21 is found.
 o o o Q o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o

#22 is found.
 o o o o o o o Q
 o o o Q o o o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o

#23 is found.
 o o o Q o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o

#24 is found.
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o

#25 is found.
 o o o o o Q o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o

#26 is found.
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o

#27 is found.
 o o o o o o Q o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o o o Q o o o
 o Q o o o o o o
 o o o Q o o o o

#28 is found.
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o
 o Q o o o o o o

#29 is found.
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o

#30 is found.
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o Q o
 o o o Q o o o o

#31 is found.
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o o o Q o o o o

#32 is found.
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o Q o o o o o
 o o o o o Q o o

#33 is found.
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o Q o o o o o
 o o o o o Q o o

#34 is found.
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o

#35 is found.
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o Q o o o o o

#36 is found.
 o o o o Q o o o
 o Q o o o o o o
 o o o o o Q o o
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o o o o o o o Q
 o o Q o o o o o

#37 is found.
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o

#38 is found.
 o o o o o Q o o
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o
 o o Q o o o o o

#39 is found.
 o o o o Q o o o
 o o o o o o o Q
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o

#40 is found.
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o

#41 is found.
 o o o o o o Q o
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o

#42 is found.
 o o o o o Q o o
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q

#43 is found.
 o o o o Q o o o
 o o o o o o o Q
 o o o Q o o o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o

#44 is found.
 o o Q o o o o o
 o o o o o Q o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o

#45 is found.
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o Q o
 o o o o Q o o o
 o Q o o o o o o

#46 is found.
 o o o o Q o o o
 o o o o o o Q o
 o o o Q o o o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o Q o o o o o o

#47 is found.
 o Q o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o Q o o o o o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o Q o
 o o o o Q o o o

#48 is found.
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o Q o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o

#49 is found.
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o Q o o o o
 o o o o o Q o o
 o o Q o o o o o

#50 is found.
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o o Q
 o o o o Q o o o

#51 is found.
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o o o o o Q o o

#52 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o Q o

#53 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o Q o o o o o

#54 is found.
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o o Q
 o o o o Q o o o

#55 is found.
 o o Q o o o o o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o
 o o o o o Q o o

#56 is found.
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o Q o o o o o

#57 is found.
 o o Q o o o o o
 o o o o o o o Q
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o Q o o o

#58 is found.
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o

#59 is found.
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o

#60 is found.
 o o o o o Q o o
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q

#61 is found.
 o o o o o Q o o
 o o Q o o o o o
 o o o o Q o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o

#62 is found.
 o o o Q o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o

#63 is found.
 o o o Q o o o o
 o o o o o o Q o
 o o o o Q o o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o

#64 is found.
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 o Q o o o o o o

#65 is found.
 o Q o o o o o o
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o

#66 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 o o o o o Q o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o Q o

#67 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o

#68 is found.
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o Q o o

#69 is found.
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o o o Q o
 o o o Q o o o o

#70 is found.
 o o Q o o o o o
 o o o o o Q o o
 o Q o o o o o o
 o o o o o o Q o
 o o o o Q o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o Q o o o o

#71 is found.
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o Q o o o o
 o o o o o o o Q

#72 is found.
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o Q o o
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o o Q
 o o o Q o o o o

#73 is found.
 o o o o o o Q o
 o o o Q o o o o
 o Q o o o o o o
 o o o o Q o o o
 o o o o o o o Q
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o

#74 is found.
 o o o o o o Q o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o

#75 is found.
 o o o o Q o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o Q o o o o o
 o o o o o Q o o

#76 is found.
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o o o Q o
 o o o o Q o o o

#77 is found.
 o o o o o o Q o
 o o Q o o o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o
 Q o o o o o o o
 o o o o o Q o o
 o o o Q o o o o

#78 is found.
 o o o Q o o o o
 o o o o o o Q o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o Q o o
 Q o o o o o o o
 o o Q o o o o o
 o o o o o o o Q

#79 is found.
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o
 o o o o Q o o o

#80 is found.
 o o o o Q o o o
 o o Q o o o o o
 o o o o o o o Q
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o
 o o o o o Q o o
 o Q o o o o o o

#81 is found.
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o o o Q o o o
 Q o o o o o o o
 o o o Q o o o o

#82 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o Q o o o

#83 is found.
 o o o o Q o o o
 o Q o o o o o o
 o o o Q o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o Q o o o o o
 Q o o o o o o o
 o o o o o o Q o

#84 is found.
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o
 Q o o o o o o o
 o o o o Q o o o

#85 is found.
 o o o o o Q o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o
 o o Q o o o o o

#86 is found.
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o Q o o o o
 o o o o o o o Q
 Q o o o o o o o
 o o o o Q o o o

#87 is found.
 o o o o o Q o o
 o o Q o o o o o
 o o o o o o Q o
 o Q o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 Q o o o o o o o
 o o o Q o o o o

#88 is found.
 o o o Q o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o o o Q
 o Q o o o o o o
 o o o o Q o o o
 Q o o o o o o o
 o o o o o Q o o

#89 is found.
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o Q o o
 o o o o o o o Q
 o o o o Q o o o
 Q o o o o o o o

#90 is found.
 o o o o Q o o o
 o Q o o o o o o
 o o o Q o o o o
 o o o o o o Q o
 o o Q o o o o o
 o o o o o o o Q
 o o o o o Q o o
 Q o o o o o o o

#91 is found.
 o o Q o o o o o
 o o o o Q o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o o Q o o
 o o o Q o o o o
 o o o o o o Q o
 Q o o o o o o o

#92 is found.
 o o Q o o o o o
 o o o o o Q o o
 o o o Q o o o o
 o Q o o o o o o
 o o o o o o o Q
 o o o o Q o o o
 o o o o o o Q o
 Q o o o o o o o

*******************************************/
