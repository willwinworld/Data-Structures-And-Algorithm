#include <iostream>
#include <cstring>
using namespace std;
// �ڴ˴�������Ĵ���
/*
дһ����ά������Array2,ʹ�����������������ǣ�
0,1,2,3,
4,5,6,7
8,9,10,11
next
0,1,2,3,
4,5,6,7,
8,9,10,11,
*/
class Array2 {
private:
	int row, col;
public:
	
};

int main() {
	Array2 a(3, 4);
	int i, j;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 4; j++)
			a[i][j] = i * 4 + j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; j++) {
			cout << a(i, j) << ",";
		}
		cout << endl;
	}
	cout << "next" << endl;
	Array2 b;
	b = a;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; j++) {
			cout << b[i][j] << ",";
		}
		cout << endl;
	}
	return 0;
}