// exercise-6.cpp: 定义控制台应用程序的入口点。
/*冰雹序列：
如果n等于1，那么已经到达这个序列数的终点，可以停止。
如果n为偶数，则将它除以2；
如果n为奇数，则将它乘以3再加1*/

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	while (true)
	{
		if (n % 2 == 0)
		{
			cout << n << "is even, ";
			n /= 2;
			cout << "so I dibide it by 2 to get" << n << endl;
		}
		if (n == 1)
		{
			cout << "2 is even, ";
			cout << "so I  it by 2 to get" << n << endl;
			break;
		}
		if (n % 2 != 0)
		{
			cout << n << "is odd, ";
			n *= 3;
			n++;
		cout << "so I  it by 2 to get" << n << endl;
		}

	}
    return 0;
}

