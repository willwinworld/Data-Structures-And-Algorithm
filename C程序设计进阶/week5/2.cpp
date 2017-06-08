#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	char a[] = "How are you?", b[20];
	char *p1, *p2;
	for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++)
		*p2 = *p1;
	*p2 = '\0';
	cout << "string a is:" << a << endl;
	cout << "string b is:" << b << endl;
	return 0;
} 
