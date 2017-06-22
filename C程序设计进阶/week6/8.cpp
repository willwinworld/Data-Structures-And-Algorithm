#include <iostream>
using namespace std;

int value1 = 20;
int value2 = 30;

int *getValue1()
{
	return &value1;
}

int *getValue2()
{
	return &value2;
}

int main()
{
	int *p;
	int *q;
	p = getValue1();
	q = getValue2();
	cout << *p << endl;
	return 0;
}
