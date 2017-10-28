#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码
/*
写一个二维数组类Array2,使得下面程序的输出结果是：
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
	int * a;
	int row, col;
public:
	Array2() { a = NULL; }
	Array2(int i_, int j_) {
		i = i_;
		j = j_;
		a = new int[i*j];
	}
	Array2(Array2 &t) {

	}
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