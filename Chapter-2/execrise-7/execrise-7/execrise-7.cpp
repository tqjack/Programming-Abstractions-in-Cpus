// execrise-7.cpp: 定义控制台应用程序的入口点。
// 编写函数，计算排列函数。

#include "stdafx.h"
#include <iostream>
#include "combinatorics.h"
#include "calendar.h"
using namespace std;

int main()
{
	int year, i;
	double n, k, result;
	cout << "please input your number:" << endl;
	cin >> n;
	cout << "the number you want to select:" << endl;
	cin >> k;
	result = permutations(n, k);
	cout << "the permutation is; "<< result << endl;
	cout << "year:" << endl;
	cin >> year;
	for (i = 0; i < 12; i++)
	{
		cout << dayInMonth(i) << monthTostring(i, year) << endl;
	}
	return 0;
}
