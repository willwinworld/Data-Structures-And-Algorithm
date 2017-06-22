#include <iostream>
using namespace std;

/*
int a = 256;
const int *p = &a;
*p = 257;  // 错误 
*/
/*
int sum(const int array[], int n)
{
	
}
*/
/*
返回整型数据的函数: int max(int x, int y);
返回指针类型数据的函数: int *function(int x, int y);
函数名字前面表示函数的类型"*"
*/ 
int *get(int arr[][4], int n, int m)  // 或者int (*arr)[4] 
{
	int *pt;
	pt = *(arr+n-1)+m-1;  // 相应的行和列地址返回出来 
	return pt;
}

int main()
{
	int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	int *p;
	p = get(a, 2, 3);
	cout << *p << endl;
	
	return 0;
}
