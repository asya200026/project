#include <stdio.h>  
#include <math.h> 


_Bool isInArea(double x, double y);
double func(double x);

int main(void)
{
	double x, y;
	int n;
	printf("�������� ������� 1 ��� 2: \n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("���������� ������� �������:\n");
		printf("x = ");
		scanf("%lf", &x);
		printf("y = ");
		scanf("%lf", &y);
		isInArea(x, y);
		printf("%d", isInArea(x, y));
		break;
	case 2: 
		printf("���������� ������� �������:\n");
		printf("x = ");
		scanf("%lf", &x);
		func(x);
		printf("%.3lf", func(x));
		break;
	default:
		printf("������������ ���� ");
		break;
	}
	return(0);
}
