#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n*n matrix: ";
	cin >> n;
	char room[101][101];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> room[i][j];
		}
	}


	int m;
	cout << "after m days: ";
	cin >> m;
  
	/*1.Ҫ���Ǳ߽����0, ����n-1,�ټ�һ���߼�һ�ͻ�Խ��
	  2.�շ�������
	  3.���ڵ��Ѿ��Ǹ�ȾԴ���������Ȼ�ڵ�һ���ʱ�򲢲��ᷢ�������Ǻ��������������
	  4.һ��Ҫ������Ⱦ��Ŀ����Ϊ�������ţ���������Ŀ���Ǳ���������Ԫ�غ��ٽ��д�Ⱦ�������׻���*/
	for (int d = 0; d < m-1; d++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (room[i][j] == '@') {
					if (room[i - 1][j] != '#' && i != 0 && room[i - 1][j] != '@') {
						room[i - 1][j] = '$';  
					}
					if (room[i][j - 1] != '#' && j != 0 && room[i][j - 1] != '@') {
						room[i][j - 1] = '$';
					}
					if (room[i + 1][j] != '#' && i != n - 1 && room[i + 1][j] != '@') {
						room[i + 1][j] = '$';
					}
					if (room[i][j + 1] != '#' && j != n - 1 && room[i][j + 1] != '@') {
						room[i][j + 1] = '$';
					}
				}
			}
		}

		/*��ʼ��Ⱦ*/
		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				if (room[x][y] == '$') {
					room[x][y] = '@';
				}
			}
		}
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (room[i][j] == '@') {
				count += 1;
			}
		}
	}

	cout << count << endl;


	/*int count = 0;
	char array[5] = {'.', '#', '@', '.', '.'};
	for (int i = 0; i < 5; i++) {
		if (array[i] == '#') {
			count++;
			array[i] = '$';
		}
	}
	cout << count << endl;
	for (int i = 0; i < 5; i++) {
		cout << array[i];
	}*/

	return 0;
}
