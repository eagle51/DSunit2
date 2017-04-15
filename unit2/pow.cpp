/*
高效幂运算O(N)复杂度
*/
#include <iostream>
#include <cmath>
using namespace std;

long long pow(long long x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (isEven(n))
		return pow(x * x, n / 2);
	else
		return pow(x * x, n / 2) * x;
}