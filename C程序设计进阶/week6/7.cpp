#include <iostream>
using namespace std;

int *getInt1()
{
	int value1 = 20;  // 局部变量 
	return &value1;
} 

int *getInt2()
{
	int value2 = 30;  // 局部变量 
	return &value2;
}

int main()
{
	int *p, *q;
	p = getInt1();  // 当调用完getInt1后，getInt1就被释放掉了 
	q = getInt2();  // 系统利用已经被释放掉的空间存储了getInt2() 
	cout << *p << endl;
	return 0;
}
