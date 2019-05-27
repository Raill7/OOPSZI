#include <stdio.h>
#include <math.h>

double f(double x)
{
	return 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}

int main()
{
	double x, y;

	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
