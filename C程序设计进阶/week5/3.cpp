#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int *pa = &a;
	
	int b[6] = {1, 2, 3, 4, 5, 6};
	int *pb = b;
	
	int c[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	int *pc = c;
	
	cout << a << endl;
	cout << pa << endl << endl;
	
	cout << b << endl;
	cout << pb << endl << endl;
	
	cout << c << endl;
	cout << pc << endl<<endl;
	
	cout << static_cast<void*>(c)<<endl;
	cout << static_cast<void*>(pc)<<endl;
	
	return 0;
}
