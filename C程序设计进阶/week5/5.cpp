#include<iostream>
using namespace std;

int main()
{
//	int a[4] = {1, 3, 5, 7};
//	cout << a << endl;  // 1首地址 
//	cout << a + 1 << endl; // 3的地址 
//	cout << &a << endl;  // a是常量，并不是变量，前面加上取地址符号，则变成指向数组的指针 
//	cout << &a+1 << endl; // 跨越整个数组再加1 
//	cout << *(&a) << endl; // 返回的将是&a所指向的数组
//	cout << *(&a)+1 << endl; // 
	
	int a = 5;
	int *p = &a;
	
	cout << *(&a) << endl;
	
	return 0; 
} 

