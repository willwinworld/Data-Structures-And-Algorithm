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

memcpy(destination, source, number_of_bytes)

int *array = new int[n];

new allocates an amount of memory needed to store the object/array that you request.
In this case n numbers of int.
The pointer will then store the address to this block of memory.
But be careful, this allocated block of memory will not be freed until you tell it by writing.

delete [] array
*/
/*
Ҫ���ز�����'[]',֧�ֶ�ά�����±�
Ҫ���ز����� '()'
Ҫ������ȿ���,�����Լ��Ŀ������캯��
*/
class Array2 {
private:
	int row;  // ��ά�������
	int column;  // ��ά�������
	int *ptr; // ָ���ά�����ָ��
public:
	Array2() {  // ���캯��
		ptr = NULL;
	}
	Array2(int paraRow, int paraColumn):row(paraRow), column(paraColumn) {  
		ptr = new int[row * column];  // ���캯��
	}
	Array2(Array2& a):row(a.row), column(a.column) {  // ��ȿ���
		ptr = new int[row * column];
		memcpy(ptr, a.ptr, sizeof(int)*row*column);
	}
	Array2& operator= (const Array2 &a) {  // ����=
		if (ptr)
			delete[]ptr;
		row = a.row;
		column = a.column;
		ptr = new int[row*column];
		memcpy(ptr, a.ptr, sizeof(int)*row*column);
		return *this;
	}
	~Array2() {  // ��������
		if (ptr)
			delete[] ptr;
	}
	int* operator [] (int i) {
		return ptr + i * column; // ���ص�ʵ�����ǵڶ�ά��[],��һά��[]ֱ�ӵ���int��һά����Ķ���
	}
	int& operator () (int i, int j) {
		return ptr[i*column + j];  // ���ز�����()
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