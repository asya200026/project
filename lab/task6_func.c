#include <stdio.h>
#include <math.h>

extern double x, result;

void  function()
{
	result = sin(4*x)+cos(4*x)*cos(2*x)+cos(2*x);
}