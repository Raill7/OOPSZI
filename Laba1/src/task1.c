#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
