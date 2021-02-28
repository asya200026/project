#include <stdio.h>
#include <math.h>


double function(double x)
{
	double f;
	f = sin(4*x)+cos(4*x)*cos(2*x)+cos(2*x);
	return(f);
}

void main()
{
	double f, x = 5;
	f = function(x);
	printf("x = %.4lf\n", x);
        printf("f = %.4lf\n\n", f);
	printf("x = ");
	scanf("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}
