#include <math.h>
#include <stdio.h>
#include "func.h"



//������� 1
double summ(int n)
{
	double a;
	int i = 0;
	a = 0;
	if (n!=0) 
	{
	do
	{
		a = a + func(i);
		++i;
	} while (i <= (n - 1));
	}
	return a;
}

