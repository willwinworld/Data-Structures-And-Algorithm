#include <iostream>
#include <stdio.h>
using namespace std;


int main(void) {
	cout << "Please input two integers: " << endl;
	int a, b;
	cin >> a >> b;
	int mid = 0;
	if (a > b) {
		mid = a;
		a = b;
		b = mid;
	}
	for (int i = a + 1; i < b; i++) {
		cout << i << endl;
	}
}

