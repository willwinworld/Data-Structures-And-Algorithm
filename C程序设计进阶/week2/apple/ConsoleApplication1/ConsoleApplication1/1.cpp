#include <iostream>
using namespace std;

int count(int m, int n)  // mƻ������nΪ������
{
	if (m <= 1 || n <= 0)
		return 1;
	if (m < n)  // ���ƻ����С����������Ҳ����˵��ʹ��ÿ��������ֻ��һ��ƻ���������ǻ��ж�������ӣ�����ֻҪ����������Ӽ�ȥ����
		return count(m, m);
	else // ���ƻ��������������������Էֳ����������1.�����ӿճ������� 2. û�����ӿճ�������ȥÿһ�������Ϸŵ�ƻ����
		return count(m, n - 1) + count(m - n, n);  // ������һ�������ǿ��ŵģ�������n-1
}

void main()
{
	int apples, plates;
	cin >> apples >> plates;
	cout << count(apples, plates);
}