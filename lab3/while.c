#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include "func.h"

int main(void)
{
	int nom, z;
	setlocale(LC_CTYPE, "rus");
	printf("������ ��� ��� ������� ������������ ������ WHILE\n"); 
	printf("����:\n");
	printf("1. ������� 1\n");
	printf("2. ������� 2\n");
	printf("3. ������� 3\n");
	printf("4. ������� 4\n");
	printf("5. ������� 5\n");
	printf("6. �����\n");
	z = 0;
	do
	{
		printf("�������� �������: ");
		switch (_getch())
		{
		case '1':
		{
			printf("������� 1\n ");
			int n;
			float a;
			printf("������� ����� n= ");
			scanf("%d", &n);
			a = summ(n);
			printf("���������: %f\n", a);
			z = 1;
			break;
		}
		case '2':
		{
			printf("������� 2\n ");
			float a1;
			float eps;
			printf("������� �������� eps= ");
			scanf("%f", &eps);
			a1 = summ2(eps);
			printf("���������: %4f\n", a1);
			z = 2;
			break;
		}
		case '3':
		{
			printf("������� 3\n ");
			int n1;
			int k;
			printf("������� ����� n= ");
			scanf("%d", &n1);
			printf("������� ����� k= ");
			scanf("%d", &k);
			print(n1, k);
			z = 3;
			break;
		}
		case '4':
		{
			printf("������� 4\n ");
			int i;
			float eps;
			printf("������� �������� eps= ");
			scanf("%f", &eps);
			i = findFirstElement(eps);
			printf("���������: %d\n", i);
			z = 4;
			break;
		}
		case '5':
		{
			printf("������� 5\n ");
			int i;
			float eps;
			printf("������� �������� eps= ");
			scanf("%f", &eps);
			i = findFirstNegativeElement(eps);
			printf("���������: %d\n", i);
			z = 5;
			break;
		}
		case '6':
		{
			printf("�� ����� �� ���������.\n ");
			z = 6;
			break;
		}
		}
	} while (z != 6);
	system("pause");
	return 0;
}
	