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
	/* if if�ṹ��if else if�ṹ������
	if(i == 0) ... //if i =0 this will work and skip following statement
	else if(i == 1) ...//if i not equal to 0 and if i =1 this will work and skip following statement
	else if(i == 2) ...// if i not equal to 0 and 1 and if i==2 the statement will execute


	if(i == 0) ...//if i =0 this will work and check the following conditions also
	if(i == 1) ...//regardless of i == 0 check, this if condition is checked
	if(i == 2) ...//regardless of i == 0 and i == 2 check ,this if condition is checked

	Ҳ����˵if else if�ṹֻ������һ�������ֻҪ����һ��������������������Ͳ���ȥ����ˣ�
	��if if ���п��������������ģ�if.... if...���ڵ����������ж����������������������н�����Ҳ����û�У�Ҳ������ȫ�Ķ�����
	����if���ܶ��ᱻִ�У�Ҳ����ִֻ�����е�һ����Ҳ���ܶ���ִ�У�if... else if����ת����if... if...����ʽ�����Ƿ�֮��һ��������
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
	/*setiosflags(ios::fixed)�ò���ָ���Ķ������Դ�С�������ʽ��ʾ��������
	����������ľ��ȷ�Χ�ھ����ܵİ���������С�����Ҳ࣬setprecision(2) ����˼����С��������ľ��ȣ�����С������������ֵĸ���Ϊ2*/
	cout << "1 " << setiosflags(ios::fixed) << setprecision(2) << (float)count1 << endl;//�������ص��ǿ��������ʽ���Ҷ�C++�﷨��������������������Щ��
	cout << "2 " << setprecision(2) << (float)count2 << endl;
	cout << "3 " << setprecision(2) << (float)count3 << endl;
	cout << "A " << setprecision(2) << (float)countA << endl;
	cout << "B " << setprecision(2) << (float)countB << endl;
	cout << "C " << setprecision(2) << (float)countC << endl;
	return 0;
}