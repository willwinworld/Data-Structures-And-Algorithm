#include <iostream>
#include <stdio.h>
using namespace std;


int main(void) {
	/*unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;*/
	int i, &ri = i;
	i = 5; ri = 10;
	cout << i << " " << ri << endl;
	getchar();
}