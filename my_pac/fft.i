
/* file : fft.i */
  
/* name of module to use*/
%module fft 
%{ 
    /* Every thing in this file is being copied in  
     wrapper file. We include the C header file necessary 
     to compile the interface */
    #include "fft.h" 
	struct complex;
%} 
  
/* explicitly list functions and variables to be interfaced */
void Print(char *str);
int Xrange(int start,int end,int step);
void Print_complex(double a,double b);


