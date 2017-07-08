#include <iostream>
using namespace std;

struct student
{
	int id_num;
	char name[10];
};

student newone()
{
	student one = {20130123, {'M', 'I', 'K', 'E', '\0'}};
	return one;  // 结构体做返回值相当于Copy一份给调用者 
}

int main()
{
	student mike = newone();
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
