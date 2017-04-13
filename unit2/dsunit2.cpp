/*
�������������O(N)���Ӷȵ��㷨������Ҫ�����ռ䲢
������ʱ�����е��㷨
*/
#include <iostream>
#include <vector>
using namespace std;
int maxSubsum(const vector<int> & a)
{
	int maxSum = 0, thisSum = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		thisSum += a[i];
		if (thisSum > maxSum)
			maxSum = thisSum;
		else if (thisSum < 0)
			thisSum = 0;
	}

	return maxSum;
}

int main(void)
{
	vector<int> vi{ 1,2,-1,4,-3,8 };
	cout << maxSubsum(vi) << endl;

	system("pause");
	return 0;
}