#include<iostream>
using namespace std;

int main()
{
//	int a[4] = {1, 3, 5, 7};
//	cout << a << endl;  // 1�׵�ַ 
//	cout << a + 1 << endl; // 3�ĵ�ַ 
//	cout << &a << endl;  // a�ǳ����������Ǳ�����ǰ�����ȡ��ַ���ţ�����ָ�������ָ�� 
//	cout << &a+1 << endl; // ��Խ���������ټ�1 
//	cout << *(&a) << endl; // ���صĽ���&a��ָ�������
//	cout << *(&a)+1 << endl; // 
	
	int a = 5;
	int *p = &a;
	
	cout << *(&a) << endl;
	
	return 0; 
} 

