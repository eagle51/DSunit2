/*
ŷ������㷨�����������ʱ�临�Ӷ�O(logN)
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