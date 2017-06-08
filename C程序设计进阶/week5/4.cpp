#include <iostream>
using namespace std;

int main()
{
	char buffer[10] = "ABC";
	char *pc;
	pc = "hello";
	cout << pc << endl;
	pc++;
	cout << pc << endl;
	pc = buffer;  // 指向首元素的指针 
	cout << pc;
	return 0;
}
