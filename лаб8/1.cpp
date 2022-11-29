#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
inline double a(float z, float x, float y)
{
	if (y != 0)
		return -4*z * ((pow((sqrt(x + y) / y * y), 1 / 3) - abs(3*y + 5 * pow(x, -1)) + pow(M_E, 3)));
	else
		return 100101010101011;
	
}
inline double b(float z, float x, float y, float c)
{
	if (x != 0)
		return (sqrt(x * x + c - y * y * pow(sin(x + z), 3) / x) + sin(27 * 3.14 / 180));
	else
		return 100101010101011;
}




