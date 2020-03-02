
/* file : gfg.i */
  
/* name of module to use*/
%module gfg 
%{ 
    /* Every thing in this file is being copied in  
     wrapper file. We include the C header file necessary 
     to compile the interface */
    #include "gfg.h" 
  
    /* variable declaration*/
    double myvar; 
%} 
  
/* explicitly list functions and variables to be interfaced */
double myvar; 
long long int fact(long long int n1); 
int my_mod(int m, int n); 
