/*
求最大相连字序O(N)复杂度的算法，仅需要常量空间并
以线性时间运行的算法
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
}/*
求最大相连字序O(N)复杂度的算法，仅需要常量空间并
以线性时间运行的算法
*/
#include <iostream>
#include <vector>
using namespace std;
int maxSubsum(const vector<int> & a)
{
    int maxSum = 0, thisSum = 0;
	for(int i = 0; i < a.size(); ++i)
	{
		thisSum += a[i];
		if(thisSum > maxSum)
			maxSum = thisSum;
		else if(thisSum < 0)
			thisSum = 0;
	}

	return maxSum;
}

int main(void)
{
	vector<int> vi{1,2,-1,4,-3,8};
	cout << maxSubsum(vi) << endl;

	system("pause");
	return 0;
}