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

memcpy(destination, source, number_of_bytes)

int *array = new int[n];

new allocates an amount of memory needed to store the object/array that you request.
In this case n numbers of int.
The pointer will then store the address to this block of memory.
But be careful, this allocated block of memory will not be freed until you tell it by writing.

delete [] array
*/
/*
要重载操作符'[]',支持二维数组下标
要重载操作符 '()'
要进行深度拷贝,建立自己的拷贝构造函数
*/
class Array2 {
private:
	int row;  // 二维数组的行
	int column;  // 二维数组的列
	int *ptr; // 指向二维数组的指针
public:
	Array2() {  // 构造函数
		ptr = NULL;
	}
	Array2(int paraRow, int paraColumn):row(paraRow), column(paraColumn) {  
		ptr = new int[row * column];  // 构造函数
	}
	Array2(Array2& a):row(a.row), column(a.column) {  // 深度拷贝
		ptr = new int[row * column];
		memcpy(ptr, a.ptr, sizeof(int)*row*column);
	}
	Array2& operator= (const Array2 &a) {  // 重载=
		if (ptr)
			delete[]ptr;
		row = a.row;
		column = a.column;
		ptr = new int[row*column];
		memcpy(ptr, a.ptr, sizeof(int)*row*column);
		return *this;
	}
	~Array2() {  // 析构函数
		if (ptr)
			delete[] ptr;
	}
	int* operator [] (int i) {
		return ptr + i * column; // 重载的实际上是第二维的[],第一维的[]直接调用int型一维数组的定义
	}
	int& operator () (int i, int j) {
		return ptr[i*column + j];  // 重载操作符()
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
	getchar();
	return 0;
}