#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "fft.h"
void Dft(float *signal,int size){
	int N=size;
	int n, k;                       
    float re[N], im[N]; 
    float P[N];           
    // for (n=0 ; n<N ; ++n) signal[n] = ((2.0 * rand()) / RAND_MAX) - 1.0;
	fprintf(stdout,"output of fourirer transformation from c...");
	fflush(stdout);
    for (k=0 ; k<N ; ++k)
    {
        re[k] = 0;
        for (n=0 ; n<N ; ++n) re[k] += signal[n] * cos(n * k * PI2 / N);
        im[k] = 0;
        for (n=0 ; n<N ; ++n) im[k] -= signal[n] * sin(n * k * PI2 / N);
        P[k] = re[k]*re[k] + im[k]*im[k];
		fprintf(stdout,"\nfreq=%d ampl=%f\n",k,P[k]);
		fflush(stdout);
    }
}
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

