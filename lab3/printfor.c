#include <math.h>
#include <stdio.h>
#include "func.h"
//������� 3
void print(int n, int k)
{
	double a;
	int k1;
	k1 = k;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			continue;
		}
		else
		{
			printf(" ���������: %f\n", a);
		}
	}
}

