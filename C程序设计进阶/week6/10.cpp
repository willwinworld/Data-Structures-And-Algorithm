#include <iostream>
using namespace std;

void function()
{
	int a = 0;
	static int b = 0;
	a = a + 1;
	b = b + 1;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main()
{
	for(int i=0; i<5; i++)
	{
		function();
		cout << "call again" << endl;
	}
	
	return 0;
}
