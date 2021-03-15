#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "func.h"


float func(int i)
{
	return pow(-1, i)/(pow(2, i) + pow(i, 2));
}
