#include <iostream>
using namespace std;

/*
Ҫʵ�֣�move(n, A, B, C)
����У�move(n-1, A, C, B)  ������ײ��������ӣ��������n-1�����ƶ�
       move n from A to C
	   move(n-1, B, A, C)
*/
void move(int m, char x, char y, char z)  // ��m�����Ӵ�A����B�ƶ���C 
{
	if (m == 1)
	{
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;
	}
	else
	{
		move(m - 1, x, z, y);
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;  // x����ʣ�µ����һ�����ӣ���x�ƶ���z
		move(m - 1, y, x, z);
	}
}

int main()
{
	int n;
	cout << "����������n = ";
	cin >> n;
	cout << "��3����������" << n << "ֻ�̵Ĳ���Ϊ:" << endl;
	move(n, 'A', 'B', 'C');
	return 0;
}

