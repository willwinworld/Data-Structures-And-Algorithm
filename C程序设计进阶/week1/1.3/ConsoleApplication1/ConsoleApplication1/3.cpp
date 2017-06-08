#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float countA = 0.00;
	float countB = 0.00;
	float countC = 0.00;
	float count1 = 0.00;
	float count2 = 0.00;
	float count3 = 0.00;
	/* if if结构与if else if结构的区别：
	if(i == 0) ... //if i =0 this will work and skip following statement
	else if(i == 1) ...//if i not equal to 0 and if i =1 this will work and skip following statement
	else if(i == 2) ...// if i not equal to 0 and 1 and if i==2 the statement will execute


	if(i == 0) ...//if i =0 this will work and check the following conditions also
	if(i == 1) ...//regardless of i == 0 check, this if condition is checked
	if(i == 2) ...//regardless of i == 0 and i == 2 check ,this if condition is checked

	也就是说if else if结构只能满足一种情况，只要满足一种情况，其它情况计算机就不会去检查了，
	而if if 是有可能满足多种情况的，if.... if...属于单独的两个判断条件，这两个条件可能有交集，也可能没有，也可能完全的独立，
	两个if可能都会被执行，也可能只执行其中的一个，也可能都不执行，if... else if可以转换成if... if...的形式，但是反之不一定成立。
	*/
	for (int i = 0; i < 3; i++)
	{
		int id;
		int total;
		cin >> id >> total;
		for (int j = 0; j < total; j++)
		{
			char kind;
			float money;
			cin >> kind >> money;
			if (id == 1) {
				count1 += money;
			}
			if (id == 2) {
				count2 += money;
			}
			if (id == 3) {
				count3 += money;
			}
			if (kind == 'A') {
				countA += money;
			}
			if (kind == 'B') {
				countB += money;
			}
			if (kind == 'C') {
				countC += money;
			}
		}
	}
	/*setiosflags(ios::fixed)该参数指定的动作是以带小数点的形式表示浮点数，
	并且在允许的精度范围内尽可能的把数字移向小数点右侧，setprecision(2) 的意思就是小数点输出的精度，即是小数点右面的数字的个数为2*/
	cout << "1 " << setiosflags(ios::fixed) << setprecision(2) << (float)count1 << endl;//这个题的重点是考察输出格式，我对C++语法还不熟练，所以这里有些坑
	cout << "2 " << setprecision(2) << (float)count2 << endl;
	cout << "3 " << setprecision(2) << (float)count3 << endl;
	cout << "A " << setprecision(2) << (float)countA << endl;
	cout << "B " << setprecision(2) << (float)countB << endl;
	cout << "C " << setprecision(2) << (float)countC << endl;
	return 0;
}