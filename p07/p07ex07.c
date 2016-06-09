/***  p07ex07.c  ***/
/***  s12169  2J34  ¼”ö—S‰À  ***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	double ddata[10]={
		1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0
	};
	int dataSize;
	int i,n;
	fp=fopen("outputString_ex07.bin","wb");
	if (fp==NULL) {
		printf("can't open a file\n");
		exit(1);
	}
	dataSize=sizeof(ddata)/sizeof(double);
	n=fwrite(ddata,sizeof(double),dataSize,fp);
	printf("%dŒÂ‘‚«‚İ‚Ü‚µ‚½\n",n);
	fclose(fp);
	
	fp=fopen("outputString_ex07.bin","rb");
	if (fp==NULL) {
		printf("can't open a file\n");
		exit(1);
	}
	i=0;
	while (fscanf(fp,"%d",&ddata[i])==1) {
		i++;
	}
	dataSize=fread(ddata,sizeof(double),100,fp);
	printf("%dŒÂ“Ç‚İ‚İ‚Ü‚µ‚½\n",dataSize);
	for (i=0;i<dataSize;i++) {
		printf("(%02d) %2d\n",i+1,ddata[i]);
	}
	fclose(fp);
	return 0;
}


/**************** ÀsŒ‹‰Ê *****************


*******************************************/
