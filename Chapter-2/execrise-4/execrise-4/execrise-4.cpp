// execrise-4.cpp: 定义控制台应用程序的入口点。
/*一个比1大的整数如果除了自身和1没有其他因子，则被称为素数。
例如17就是一个素数，因为除了1和17之外没有其他数可以整除它。
编写一个判定函数isPrime（n), 如果整数n是素数，则返回true，反之则返回false。
为了测试你的算法，编写一个main函数来列出从1到100以内的素数。*/

#include "stdafx.h"
#include <iostream>
using namespace std;

bool isPrime(int x);
int main()
{
	int i;
	for (i = 2; i <= 100; i++)
	{
		if (isPrime(i))
			cout << i << "    ";
	}
    return 0;
}

bool isPrime(int x)
{
	int i, y = 1;
	for (i = 2; i < x; i++)
	{
		if (x%i == 0)
			y += i;
	}
	return(y == 1);
}
