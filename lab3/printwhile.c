#include <math.h>
#include <stdio.h>
#include "func.h"
//������� 3
void print(int n, int k)
{
	double a;
	int k1;
	k1 = k;
	int i = 0;
	while (i <= (n - 1))
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf(" ���������: %f\n", a);
		}
		++i;
	}
}

