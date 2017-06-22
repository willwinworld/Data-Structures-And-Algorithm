#include <iostream>
using namespace std;

int *getInt1()
{
	int value1 = 20;
	return &value1;
} 

int main()
{
	int *p;
	p = getInt1();  // p指向已经被释放掉的存储空间，取决于计算机的内存空间是否有被使用 
	cout << *p << endl;
	return 0;
}
