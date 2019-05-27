#include <math.h>
#include "func.h"

double x, y;

void f()
{
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
