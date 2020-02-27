%module fft 
%{ 
    #include "fft.h" 
	struct complex;
    #define PI2 6.2832
%} 
void Print(char *str);
int Xrange(int start,int end,int step);
void Print_complex(double a,double b);
void Dft(float *arr,int size);


