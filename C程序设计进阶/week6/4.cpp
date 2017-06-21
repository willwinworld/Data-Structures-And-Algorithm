#include <iostream>
using namespace std;

int sum(int array[], int n)  // c++编译器将形参数组名作为指针变量来处理 
{
	for(int i=0; i<10-1; i++)
	{
		*(array+1) = *array + *(array+1);
		array++;
	}
	return *array;
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	cout << *a << endl;  // 1
//	cout << *(a+1) << endl;  // 2
	cout << sum(a, 10);
	return 0;
}
