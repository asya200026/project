#include <stdio.h>
#include <math.h>

void function();
double x, result;
void main()
{
	x = 5;
	function();
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", result);
	printf("x = ");
	scanf("%lf", &x);
	function();
	printf("f = %.4lf", result);
}

void  function()
{
	result = sin(4*x)+cos(4*x)*cos(2*x)+cos(2*x);
}
