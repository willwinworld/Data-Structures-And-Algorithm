#include <iostream>
#include <iomanip>
using namespace std;

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
//	cout << &a[0] << endl;  // 数组名相当于指向数组第一个元素的指针
//	cout << a[0] << endl;
//	return 0;
//}


//int main()
//{
//	int a[5] = { 10, 11, 12, 13, 14 };
//	int *p = NULL;
//	cout << a << endl;
//	p = a;
//	cout << p << endl;
//	cout << *p << endl;  // a[0]
//	cout << *p++ << endl; // 虽然++优先级高，但++的含义是先使用前面的变量，然后再进行++，虽然++具有比较高的等级，但做完*的运算之后再来++，所以会打印出a[0]的值，同时p指向了a[1]
//	cout << *p++ << endl;
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p = &a[3];
//	*p = 100;
//	cout << *p++ << endl;
//	cout << *p-- << endl;
//	cout << *--p << endl;
//	return 0;
//}


//int main()
//{
//	int a[10], *p = NULL, *q = NULL, temp;
//	for (p = a; p < a + 10; p++)
//		cin >> *p;
//	for (p = a, q = a + 9; p < q; p++, q--)
//	{
//		temp = *p; *p = *q; *q = temp;
//	}
//	for (p = a; p < a + 10; p++)
//		cout << setw(3) << *p;
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
//	int *p = NULL;
//	for (p = &a[0][0]; p < &a[0][0] + 12; p++) {
//		cout << p << " " << *p << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
//	int (*p)[4], i, j;  // 填空：完成变量p的定义
//	p = a;
//	cin >> i >> j;  // i<3代表行号，j<4代表列号
//	cout << setw(4) << *(*(p + i) + j);  // 正误判断:访问元素a[i][j],等价于p[i][j]
//	
//	return 0;
//}
/*
int s, 开始位置
返回值，返回本层的右括号位置
*/
//char man;
//int date(char str[], int s)  // 开始位置
//{
//	int n;
//	if (str[s] != man) {
//		return s;
//	}
//	else {
//		n = date(str, s + 1);  // 通过递归一定会找到相对应的右括号的位置n
//		cout << s << " " << n << endl;
//		return date(str, n + 1); // 找到n以后开始向下一层推进
//	}
//}


//int main()
//{
//	char a[] = "How are you?", b[20];
//	char *p1, *p2;
//	for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//	cout << "string a is:" << a << endl;
//	cout << "string b is:" << b << endl;
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int *pa = &a;
//
//	int b[6] = { 1, 2, 3, 4, 5, 6 };
//	int *pb = b;
//
//	char c[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };
//	char *pc = c;
//
//	cout << a << endl;
//	cout << pa << endl << endl;
//}


/*找到无法匹配的左括号和右括号，输出原来的字符串，并在下一行标出不能匹配的括号。
不能匹配的左括号用"$"标注，不能匹配的右括号用"?"标注*/
//char leftbracket;
//int find(char str[], int current)
//{
//	int rightbracket;
//	if (str[current] != leftbracket) {
//		return current;
//	}
//	else {
//		rightbracket = find(str, current + 1);
//		cout << current << " " << rightbracket << endl;
//		return find(str, rightbracket + 1);
//	}
//}


/*
父问题：找到右括号
子问题：匹配中间的括号
e(上一层右括号的位置,即下标) = f(str, s)(s代表开始的位置)
内部的字符串到底是不是匹配的括号对，如果里层不是匹配的括号对，那么外层也不是匹配的括号
Bool, int e = f(str, s){  // bool代表内部的括号是不是匹配的括号对
	if (strlen(str) == s)  // 如果字符串为空的话，在这里判断空串的时候，并不是判断整个字符串为空串，实际上判断的是当前这一层是不是一个空串，也就是这个s是不是已经到了字符串的结尾处，如果到了结尾处认为已经完全匹配完了
		return true, -1;
    else{  // 如果字符串不为空的话，
		if(str[s] == '('){  // s代表当前这一层开始的位置,首先判断是不是左括号，如果是左括号，匹配里面的东西
			int b, int n = f(str, s+1)  // 如果是左括号的话，去匹配左括号里面的东西
			if (b == false)
				return false
			else  // 匹配完了之后再匹配后面的右括号
			    if (str[n] == ')')   // 如果里面的返回结果是右括号的话，那么我们继续做右边的匹配
					return f(str, n+1); // 匹配完右括号之后，再匹配右括号后面的东西
				else
					return false;  // 代表匹配失败了
				return f(str, n+1);  // 因为当前字符串已经匹配完了
	    }
        else{  // 如果是以右括号开头的，如果是在最上层的话，那么肯定是一个false，但是如果是在某一层里面的话，碰到一个右括号是要返回到上一层的意思，所以要返回true，同时要返回右括号的位置，也就是s
	       return true, s;
	    }
    }
}

cin >> str;
bool b, int n = f(str, 0);
if (b==true&&n==-1)
	cout << "yes" << endl;

c++里多返回值的函数实现的方式：
对返回值编码（比如定义返回-2代表匹配失败，否则就是上一级右括号的下标或者-1表示匹配到末尾）
全局变量（在返回值前赋值，调用后读取）
结构体（作为返回类型）
指针参数（还没学）
*/
//bool b;
//int f(char str[], int s) {
//	if (strlen(str) == s) {
//		return (b = true, -1);  // 括号表达式，首先计算逗号前面的东西，然后以逗号右边的值为整个表达式的值，比如这个表达式的值为-1，但在计算-1之前，它先计算了b=true,先把b赋值为了true
//	}
//	else {
//		if (str[s] == '(') {
//			int n;
//			(b, n) = f(str, s + 1);
//			if (b == false) {
//				return (b = false, n);
//			}
//			else {
//				if (str[n] = ')')
//					return f(str, n + 1);
//				else
//					return (b = false, n);
//			}
//		}
//		else {
//			return (b = true, s);
//		}
//	}
//}


//char output[101];
//char input[101];
//bool in = false;
//int check(bool in, int s)  // 这个函数达到目的就是将所有字符进行递归处理后，形成的效果是所有匹配的括号留着不动，该转的符号转
//{
//	for (int i = s; i < 100; i++) {
//		if (output[i] == ')') {
//			if (in == false) {  // 如果不在括号里面
//				output[i] = '?'; // 没进栈之前遇到')'直接进行标记
//			}
//			if (in == true) {  // 进栈之后，遇到')'则把()都吃了，意思就是说所有匹配的括号对都已经匹配完了，出栈
//				output[i] = ' ';
//				output[s - 1] = ' ';  // 
//				return 0;  // 正常退出
//			}
//		}
//		if (output[i] == '(') {
//			output[i] = '$';  // 由于之前该匹配的括号已经匹配完了
//			check(true, i + 1);  // 递归, 错误点
//		}
//		if (output[i] != '(' && output[i] != ')' && output[i] != '?' && output[i] != '$') {  // 如果写或的话，则只要有一个条件满足整个式子就是对的，比如满足output[i] != '(', 但有可能不满足output[i] ！= '?', 即output[i] == '?', 而如果是和条件的话，则所有的条件都必须满足才行
//			if (output[i] == '\0' || i == 99)
//				return 0;
//			else
//				output[i] = ' ';
//		}
//	}
//}
//
//
//int main()
//{
//	while (cin.getline(input, 101)) {
//		memcpy(output, input, sizeof(input));  // void *memcpy(void *dest, const void *src, size_t n);  memcpy()用来拷贝src所指的内存内容前n个字节到dest所指的内存地址上，与strcpy()不同的是,memcpy()会完整的复制n个字节,不会因为遇到字符串结束'\0'而结束，返回值:返回指向dest的指针，memcpy(p,a,sizeof(a));c++求数组长度为: int arr_length = sizeof(arr) / sizeof(arr[0]);sizeof计算数据（包括数组、变量、类型、结构体等）所占内存空间，用字节数表示,对于静态数组，sizeof可直接计算数组大小,int a[10];char b[]="hello"; sizeof(a)等于40; sizeof(b)等于6, hello 5个字符，加上'\0';
//		check(false, 0);  // 错误点
//		for (int i = 0; i < 100; i++) {
//			if (input[i] != '\0') {
//				cout << input[i];
//				if (i == 99) {
//					cout << endl;
//					break;
//				}
//			}
//			else {
//				cout << endl;
//				break;
//			}
//		}
//
//		for (int i = 0; i < 100; i++) {  // 错误点，for循环写在while外面
//			if (output[i] != '\0') {
//				cout << output[i];
//				if (i == 99) {
//					cout << endl;
//					break;
//				}
//			}
//			else {
//				cout << endl;
//				break;
//			}
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//	int a[10];
//	cout << sizeof(a) / sizeof(a[0]) << endl;
//	char b[] = "hello";
//	cout << sizeof(b) << endl;
//}


//char input[101];
//char output[101];
//bool in = false;
//int check(bool in, int s) {//in 表示是否进栈  
//	for (int i = s; i < 100; i++) {
//		if (output[i] == ')') {
//			if (in == false) {
//				output[i] = '?';//没进栈之前遇到‘）’直接进行标记  
//			}
//			if (in == true) {//进栈之后，遇到‘）’则把（）都吃了，出栈  
//				output[i] = ' ';
//				output[s - 1] = ' ';
//				return 0;
//			}
//		}
//		if (output[i] == '(') { //如果遇到‘（’则进栈；  
//			output[i] = '$';
//			check(true, i + 1);
//		}
//		if (output[i] != '('&&output[i] != ')'&&output[i] != '?'&&output[i] != '$') {
//			if (output[i] == '\0' || i == 99)
//				return 0;
//			else
//				output[i] = ' ';
//		}
//	}
//}
//int main() {
//	while (cin.getline(input, 101)) {
//		memcpy(output, input, sizeof(input));
//		check(false, 0);
//		for (int i = 0; i < 100; i++) {
//			if (input[i] != '\0') {
//				cout << input[i];
//				if (i == 99) {
//					cout << endl;
//					break;
//				}
//			}
//			else {
//				cout << endl;
//				break;
//			}
//		}
//		for (int i = 0; i < 100; i++) {
//			if (output[i] != '\0') {
//				cout << output[i];
//				if (i == 99) {
//					cout << endl;
//					break;
//				}
//			}
//			else {
//				cout << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}


char *fun(char *p) {
	return p;
}


int main()
{
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, };
	//cout << a << endl;
	//cout << a + 5 << endl;
	//cout << *(a + 5) << endl;
	//int *p = a + 5;
	//cout << *(p + 5) << endl;
	char a = 'a';
	cout << fun(&a) << endl;
}