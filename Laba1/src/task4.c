#include <stdio.h>
#include <math.h>

void f();
double x, result;

int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	
	system("pause");
	return 0;
}

void f()
{
	result = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
