#include <iostream>
using namespace std;


int i = 0;
char input[501];
int recur()
{
	char c = input[i];
	i++;
	if (c == ' ')
		return 1;
	if (c != ' ' && c != '\0') {
		recur();
		cout << c;
	}
	
	return 1;
}

int main()
{
	cin.getline(input, 501);
	if (recur() == 1)  // �����
		cout << ' ';
	while (input[i] != '\0') {
		if (recur() == 1)  // ÿ�������ո񣬶��᷵��1�����Դ�ӡһ���ո�
			cout << ' ';
	}
	if (input[i] == '\0') {
		cout << endl;  // ������з�
		return 0;
	}
}

