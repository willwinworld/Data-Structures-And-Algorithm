#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int);

int main()
{
	int a;
	cout << "������һ������" << endl;
	while (cin >> a)
	{
		if (checkPrime(a))
			cout << "������" << endl;
		else
			cout << "��������" << endl;
	}
	return 0;
}

bool checkPrime(int number)
{
	int i, k;
	k = sqrt(number);
	for (i = 2; i <= k; i++)
	{
		if (number % i == 0)
			           // ֻҪ��һ����������
			return 0;  // ��������
	}
	return 1;  // �ߵ���һ����˵��û�ܱ�����
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}

int main()  // main������������һ�������Ϳ���һ���µ��ڴ�ռ�
{
	cout << fact(4) << endl;
	return 0;
}

int recur()
{
	char c;
	c = cin.get();
	if (c != '\n')
		recur();
	cout << c;
	return 0;
}

int main()
{
	recur();
	return 0;
}