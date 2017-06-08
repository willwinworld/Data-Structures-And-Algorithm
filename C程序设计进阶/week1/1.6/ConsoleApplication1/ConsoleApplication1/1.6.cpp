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
  
	/*1.要考虑边界情况0, 或者n-1,再减一或者加一就会越界
	  2.空房间的情况
	  3.相邻的已经是感染源的情况，虽然在第一天的时候并不会发生，但是后面会出现这种情况
	  4.一定要将待传染的目标标记为其它符号，这样做的目的是遍历了所有元素后再进行传染，不容易混淆*/
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

		/*开始传染*/
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
