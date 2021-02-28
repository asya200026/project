#include <stdio.h> 
#include <math.h> 

double func(double x)
{
	double f;
        if (x <= 3)
	       f = pow(x,2)-3*x+9;
        else  
           f = 1/(pow(x,3)+6);
	return(f);
}