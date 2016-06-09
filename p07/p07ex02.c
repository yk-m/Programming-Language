/***  p07ex02.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>

int main()
{
	int i,j,k,number;
	FILE *fp1,*fp2;
	int point[100][5];
	int sum[5]={0,0,0,0,0};
	double average[5];
	
	fp1=fopen("marks.txt","r");
	if (fp1==NULL) {
		printf("can't open a file\n");
		exit(1);
	}
	
	i=0;
	while (fscanf(fp1,"%d,%d,%d,%d",&point[i][0],&point[i][1],&point[i][2],&point[i][3])==4) {
		i++;
	}
	fclose(fp1);
	
	fp2=fopen("marks1.txt","w");
	fprintf(fp2,"        英語  数学  理科  国語   合計\n");
	number=i;
	for (i=0;i<number;i++){
		point[i][4]=0;
		for (j=0;j<4;j++){
			sum[j] += point[i][j];
			point[i][4] += point[i][j];
		}
	}
	for (i=0;i<4;i++){
		average[i] = sum[i]/number;
	}
	for (i=0;i<number;i++){
		sum[4] += point[i][4];
	}
	average[4] = sum[4]/number;
	for (i=0;i<number;i++) {
		fprintf(fp2,"         %3d   %3d   %3d   %3d    %3d\n",
			point[i][0],point[i][1],point[i][2],point[i][3],point[i][4]);
	}
	fprintf(fp2,"平均    %.1lf  %.1lf  %.1lf  %.1lf  %.1lf\n",
		average[0],average[1],average[2],average[3],average[4]);
	
	fclose(fp2);
	return 0;
}


/**************** 実行結果 *****************

        英語  数学  理科  国語   合計
          70    59    56    66    251
         100   100   100   100    400
          68    90    96    94    348
          79    92    85    75    331
          64    66    72    50    252
         100   100   100   100    400
          81    92    86    97    356
          95    88    88    79    350
          78    74    75    74    301
          75    80    92    75    322
          87    76    77    63    303
          90    90    99   100    379
          68    68    67    75    278
          66    66    69    71    272
          71    69    73    80    293
          98    81    98    97    374
         100   100   100   100    400
          91   100    94    92    377
          89    87    73    68    317
          89   100   100    94    383
          21    27    26    25     99
         100   100   100   100    400
          36    53    32    31    152
          97    74    72    85    328
          86    85    81    79    331
          75    71    63    72    281
          88    94    87    84    353
          62    68    72    60    262
          62    68    62    70    262
          92    88    86    70    336
          57    64    69    64    254
          55    77    51    73    256
          58    74    80    71    283
          97    91    79   100    367
          69    58    72    69    268
          38    54    35    19    146
          31    23    34    37    125
          94    85    71    63    313
          64    90    71    73    298
          55    51    50    48    204
          97   100   100   100    397
          87    83   100    85    355
平均    75.0  77.0  76.0  74.0  303.0

*******************************************/
