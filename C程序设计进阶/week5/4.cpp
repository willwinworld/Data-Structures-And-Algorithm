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
	pc = buffer;  // ָ����Ԫ�ص�ָ�� 
	cout << pc;
	return 0;
}
