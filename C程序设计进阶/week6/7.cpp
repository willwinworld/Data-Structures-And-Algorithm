#include <iostream>
using namespace std;

int *getInt1()
{
	int value1 = 20;  // �ֲ����� 
	return &value1;
} 

int *getInt2()
{
	int value2 = 30;  // �ֲ����� 
	return &value2;
}

int main()
{
	int *p, *q;
	p = getInt1();  // ��������getInt1��getInt1�ͱ��ͷŵ��� 
	q = getInt2();  // ϵͳ�����Ѿ����ͷŵ��Ŀռ�洢��getInt2() 
	cout << *p << endl;
	return 0;
}
