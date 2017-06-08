#include <iostream>
using namespace std;

//int main()
//{
//	int a = 0, b = 0, temp;
//	int *p1 = NULL, *p2 = NULL;  // 指针初始化
//	cin >> a >> b;
//	p1 = &a;
//	p2 = &b;
//	if (*p1 < *p2)
//	{
//		temp = *p1; *p1 = *p2; *p2 = temp;
//	}
//	cout << "max = " << *p1 << ",min=" << *p2 << endl;
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int *p = &n;
//	cout << p << endl;
//	p++;
//	cout << p << endl;
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p = &a[3];
//	cout << *p << endl;
//	*p = 100;
//	cout << a[3] << endl;
//	return 0;
//}


//int main()
//{
//	int a[5] = { 10, 11, 12, 13, 14 };
//	cout << a << endl;
//	cout << *a << endl;
//	cout << &a[0] << endl;
//	cout << a[0] << endl;
//	return 0;
//} 


char man;
/*
参数;char str[], 字符串
int s, 开始位置
返回值，返回本层的右括号位置
*/
int date(char str[], int s)
{
	int n;
	if (str[s] != man)
	{
		return s;
	}
	else
	{
		n = date(str, s + 1);
		cout << s << " " << n << endl;
		return date(str, n + 1);
	}
}

int main()
{
	char str[101] = { 0 };
	cin >> str;
	man = str[0];  // man = "("
	int n = date(str, 1);
	cout << 0 << " " << n << endl;
	return 0;
}