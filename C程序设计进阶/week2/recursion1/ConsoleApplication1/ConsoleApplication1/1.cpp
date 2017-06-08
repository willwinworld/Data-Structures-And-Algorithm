#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int);

int main()
{
	int a;
	cout << "请输入一个整数" << endl;
	while (cin >> a)
	{
		if (checkPrime(a))
			cout << "是质数" << endl;
		else
			cout << "不是质数" << endl;
	}
	return 0;
}

bool checkPrime(int number)
{
	int i, k;
	k = sqrt(number);
	for (i = 2; i <= k; i++)
	{
		if (number % i == 0)
			           // 只要有一个数被除尽
			return 0;  // 则不是素数
	}
	return 1;  // 走到这一步，说明没能被除尽
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}

int main()  // main函数里面遇到一个函数就开辟一个新的内存空间
{
	cout << fact(4) << endl;
	return 0;
}

int recur()
{
	char c;
	c = cin.get();
	if (c != '\n')
		recur();
	cout << c;
	return 0;
}

int main()
{
	recur();
	return 0;
}