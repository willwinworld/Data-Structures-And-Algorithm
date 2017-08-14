#include <iostream>
using namespace std;


int search(int *a, int n, int key){
	int i = 0;
	a[0] = key; // 哨兵
	cout << a << endl; 
	i = n;
	while (a[i] != key){
		i--;
	}
	return i; // 返回0就是查找失败 
}


int main()
{
	int array[3] = {2, 3, 4};
	int test = search(array, 3, 1);
	cout << test << endl;
}
