#include <iostream>
using namespace std;

int slice(int n)  // ÇÐ±ý
{
	if (n == 0)
		return 1;
	else
		return slice(n - 1) + n;
}

int fab(int n)  // ì³²¨ÄÇÆõ
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fab(n - 1) + fab(n - 2);
}

void decimalTobinary(int n)
{
	if (n / 2 != 0)
	{
		decimalTobinary(n / 2);
		int residuum = n % 2;
		cout << residuum << endl;
	}
	else
	{
		cout << n % 2 << endl;
	}
}

int main()
{
	//cout << slice(4) << endl;
	//cout << fab(3) << endl;
	decimalTobinary(123);
	return 0;
}