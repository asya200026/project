#include <stdio.h>
#include <math.h>

void main()
{   
    double x1,f1,x = 5;
    double f = sin(4*x)+cos(4*x)*cos(2*x)+cos(2*x);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    printf("x1 = ");
    scanf("%lf", &x1);
    f1 = sin(4*x)+cos(4*x)*cos(2*x)+cos(2*x);
    printf("f1 = %.4lf", f1);
}



