/*
欧几里得算法求最大公因数，时间复杂度O(logN)
*/

#include <iostream>
using namespace std;
long long gcd(long long m, long long n)
{
	while(n != 0)
	{
		long long rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}

int main(void)
{
	cout << gcd(1698, 24);
	system("pause");
	return 0;
}