#include <iostream>
using namespace std;

void lookingForIndex(int number, int a[])
{
	for (int i = 0; i < number; i++) 
	{
		if (a[i] == i)
		{
			cout << a[i] << endl;
			break;
		}
	}
	cout << "N" << endl;
}

int main()
{
	cout << "��һ��" << endl;
	int a1[6] = { -2, -1, 7, 3, 4, 8 };
	lookingForIndex(6, a1);

	cout << '\n' << endl;

	cout << "�ڶ���" << endl;
	int a2[6] = { 9, 9, 9, 9, 9, 9 };
	lookingForIndex(6, a2);

	return 0;
}