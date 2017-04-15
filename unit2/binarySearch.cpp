/*
折半查找算法时间复杂度O(logN)
*/
#include <vector>
#include <iostream>
using namespace std;

#define NOT_FOUND -1;

template <typename Comparable>
int binarySearch(const vector<Comparable> &a, const Comparable & x)
{
	int low = 0, high = a.size() - 1;
	while(low <= high)
	{
		int mid = (low + high) / 2;
		if(a[mid] < x)
			low = mid + 1;
		else if(a[mid] > x)
			high = mid - 1;
		else
			return mid;
	}
	return NOT_FOUND;
}

int main(void)
{
	vector<int> vi{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << binarySearch(vi, 10) << endl;
	system("pause");
	return 0;
}