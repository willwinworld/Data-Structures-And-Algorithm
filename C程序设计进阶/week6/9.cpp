#include <iostream>
using namespace std;
/*
����һ���������������еı����ĵ�ַ
���ؾ�̬�ֲ������ĵ�ַ�����Ƕ�̬�ֲ������ĵ�ַ 

��̬�ֲ�����: �����еľֲ�������ֵ�ں������ý�������ʧ������ԭֵ
����ռ�õĴ洢��Ԫ���ͷţ�����һ�θú�������ʱ���Կ��Լ���ʹ�øñ��� 
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
