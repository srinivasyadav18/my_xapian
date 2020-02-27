#include <stdio.h>
#include <math.h>

#include "fft.h"

void Print(char *str){
	int x=printf("String from go %s",str);
	return;
}
int Xrange(int start,int end,int step){
	int sum=0;
	for (int i=start;i<end;i=i+step){
		fprintf(stdout,"%d ",i);
		fflush(stdout);
		sum=sum+i;
	}
	fprintf(stdout,"\n");
	fflush(stdout);
	return sum;;
}

struct complex{
	double real;
	double img;
};

void Print_complex(double a,double b){
	struct complex x;
	x.real=a;
	x.img=b;
	fprintf(stdout,"complex values in x are real=%f img=%f",x.real,x.img);
	fflush(stdout);
}

