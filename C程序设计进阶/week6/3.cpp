#include <iostream>
using namespace std;

int maxvalue(int (*p)[4]) // ����һ��ָ��ʹ������Ϊһ��ָ���ά�����е�һ�������ָ���أ� 
{
	int max = p[0][0];
	for(int i=0; i<3; i++)
		for(int j=0; j<4; j++)
			if(p[i][j]>max)
				max = p[i][j];
			return max;
}

int main()  // a��ָ���ά�����е�һ��С�����ָ�� 
{
	int a[3][4] = {{1, 3, 5, 7}, {9, 11, 13, 15}, {2, 4, 6, 8}};
	cout << "The Max value is " << maxvalue(a);
	return 0;
}
