#include <iostream>
using namespace std;

/*
int a = 256;
const int *p = &a;
*p = 257;  // ���� 
*/
/*
int sum(const int array[], int n)
{
	
}
*/
/*
�����������ݵĺ���: int max(int x, int y);
����ָ���������ݵĺ���: int *function(int x, int y);
��������ǰ���ʾ����������"*"
*/ 
int *get(int arr[][4], int n, int m)  // ����int (*arr)[4] 
{
	int *pt;
	pt = *(arr+n-1)+m-1;  // ��Ӧ���к��е�ַ���س��� 
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
