#include <stdio.h>
#include <math.h>
void funvalor(double x, double y);
void funrefer(double * x, double  *y);
void main()
{  
	double a,b;  
	a=5.0; 
	b=100;
	funvalor(a,b);
	printf("\n a= %.1f b=%.1lf",a,b);
	funrefer(&a,&b);
	printf("\n a= %.1f b=%.1lf",a,b);
}
void funvalor (double x, double y)
 {  
 	x=x*x;  
 	y= sqrt (y);
	 
 }
 void funrefer(double *x, double * y)
  {  
  	*x=(*x)*(*x);  
  	*y=sqrt(*y); 
  }

