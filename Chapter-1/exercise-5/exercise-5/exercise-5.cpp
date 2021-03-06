// exercise-5.cpp: 定义控制台应用程序的入口点。
//每个大于1的正整数可以表示成几个素数的乘积。这类因式分解是唯一的，被称为值因式分解。例如，数字60可以被分解为2*3*2*5；每个因数都是素数。注意，因式分解中，素数可以出现多次。

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int num, i;
	cout << "This program factors a number: " << endl;
	cout << "Enter number to be factored: ";
	cin >> num;
	for (i = 2;; i++)
	{
		while (num%i == 0)
		{
			if (num / i == 1)
				cout << i;
			else
			cout << i << "*";
			num /= i;
		}
		if (num == 1)
			break;
	}
    return 0;
}

