#include <iostream>
using namespace std;
/*
返回一个处于生命周期中的变量的地址
返回静态局部变量的地址，而非动态局部变量的地址 
*/
int *getValue1()
{
	static int value1 = 20;
	return &value1;
}  

int *getValue2()
{
	static int value2 = 30;
	return &value2;
}

int main()
{
	int *p;
	int *q;
	p = getValue1();
	q = getValue2();
	cout << *p << endl;
	cout << *q << endl;
}
