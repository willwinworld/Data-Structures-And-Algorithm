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
//	cout << &a[0] << endl;  // �������൱��ָ�������һ��Ԫ�ص�ָ��
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
//	cout << *p++ << endl; // ��Ȼ++���ȼ��ߣ���++�ĺ�������ʹ��ǰ��ı�����Ȼ���ٽ���++����Ȼ++���бȽϸߵĵȼ���������*������֮������++�����Ի��ӡ��a[0]��ֵ��ͬʱpָ����a[1]
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
//	int (*p)[4], i, j;  // ��գ���ɱ���p�Ķ���
//	p = a;
//	cin >> i >> j;  // i<3�����кţ�j<4�����к�
//	cout << setw(4) << *(*(p + i) + j);  // �����ж�:����Ԫ��a[i][j],�ȼ���p[i][j]
//	
//	return 0;
//}
/*
int s, ��ʼλ��
����ֵ�����ر����������λ��
*/
//char man;
//int date(char str[], int s)  // ��ʼλ��
//{
//	int n;
//	if (str[s] != man) {
//		return s;
//	}
//	else {
//		n = date(str, s + 1);  // ͨ���ݹ�һ�����ҵ����Ӧ�������ŵ�λ��n
//		cout << s << " " << n << endl;
//		return date(str, n + 1); // �ҵ�n�Ժ�ʼ����һ���ƽ�
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


/*�ҵ��޷�ƥ��������ź������ţ����ԭ�����ַ�����������һ�б������ƥ������š�
����ƥ�����������"$"��ע������ƥ�����������"?"��ע*/
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
�����⣺�ҵ�������
�����⣺ƥ���м������
e(��һ�������ŵ�λ��,���±�) = f(str, s)(s����ʼ��λ��)
�ڲ����ַ��������ǲ���ƥ������Ŷԣ������㲻��ƥ������Ŷԣ���ô���Ҳ����ƥ�������
Bool, int e = f(str, s){  // bool�����ڲ��������ǲ���ƥ������Ŷ�
	if (strlen(str) == s)  // ����ַ���Ϊ�յĻ����������жϿմ���ʱ�򣬲������ж������ַ���Ϊ�մ���ʵ�����жϵ��ǵ�ǰ��һ���ǲ���һ���մ���Ҳ�������s�ǲ����Ѿ������ַ����Ľ�β����������˽�β����Ϊ�Ѿ���ȫƥ������
		return true, -1;
    else{  // ����ַ�����Ϊ�յĻ���
		if(str[s] == '('){  // s����ǰ��һ�㿪ʼ��λ��,�����ж��ǲ��������ţ�����������ţ�ƥ������Ķ���
			int b, int n = f(str, s+1)  // ����������ŵĻ���ȥƥ������������Ķ���
			if (b == false)
				return false
			else  // ƥ������֮����ƥ������������
			    if (str[n] == ')')   // �������ķ��ؽ���������ŵĻ�����ô���Ǽ������ұߵ�ƥ��
					return f(str, n+1); // ƥ����������֮����ƥ�������ź���Ķ���
				else
					return false;  // ����ƥ��ʧ����
				return f(str, n+1);  // ��Ϊ��ǰ�ַ����Ѿ�ƥ������
	    }
        else{  // ������������ſ�ͷ�ģ�����������ϲ�Ļ�����ô�϶���һ��false�������������ĳһ������Ļ�������һ����������Ҫ���ص���һ�����˼������Ҫ����true��ͬʱҪ���������ŵ�λ�ã�Ҳ����s
	       return true, s;
	    }
    }
}

cin >> str;
bool b, int n = f(str, 0);
if (b==true&&n==-1)
	cout << "yes" << endl;

c++��෵��ֵ�ĺ���ʵ�ֵķ�ʽ��
�Է���ֵ���루���綨�巵��-2����ƥ��ʧ�ܣ����������һ�������ŵ��±����-1��ʾƥ�䵽ĩβ��
ȫ�ֱ������ڷ���ֵǰ��ֵ�����ú��ȡ��
�ṹ�壨��Ϊ�������ͣ�
ָ���������ûѧ��
*/
//bool b;
//int f(char str[], int s) {
//	if (strlen(str) == s) {
//		return (b = true, -1);  // ���ű��ʽ�����ȼ��㶺��ǰ��Ķ�����Ȼ���Զ����ұߵ�ֵΪ�������ʽ��ֵ������������ʽ��ֵΪ-1�����ڼ���-1֮ǰ�����ȼ�����b=true,�Ȱ�b��ֵΪ��true
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
//int check(bool in, int s)  // ��������ﵽĿ�ľ��ǽ������ַ����еݹ鴦����γɵ�Ч��������ƥ����������Ų�������ת�ķ���ת
//{
//	for (int i = s; i < 100; i++) {
//		if (output[i] == ')') {
//			if (in == false) {  // ���������������
//				output[i] = '?'; // û��ջ֮ǰ����')'ֱ�ӽ��б��
//			}
//			if (in == true) {  // ��ջ֮������')'���()�����ˣ���˼����˵����ƥ������ŶԶ��Ѿ�ƥ�����ˣ���ջ
//				output[i] = ' ';
//				output[s - 1] = ' ';  // 
//				return 0;  // �����˳�
//			}
//		}
//		if (output[i] == '(') {
//			output[i] = '$';  // ����֮ǰ��ƥ��������Ѿ�ƥ������
//			check(true, i + 1);  // �ݹ�, �����
//		}
//		if (output[i] != '(' && output[i] != ')' && output[i] != '?' && output[i] != '$') {  // ���д��Ļ�����ֻҪ��һ��������������ʽ�Ӿ��ǶԵģ���������output[i] != '(', ���п��ܲ�����output[i] ��= '?', ��output[i] == '?', ������Ǻ������Ļ��������е������������������
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
//		memcpy(output, input, sizeof(input));  // void *memcpy(void *dest, const void *src, size_t n);  memcpy()��������src��ָ���ڴ�����ǰn���ֽڵ�dest��ָ���ڴ��ַ�ϣ���strcpy()��ͬ����,memcpy()�������ĸ���n���ֽ�,������Ϊ�����ַ�������'\0'������������ֵ:����ָ��dest��ָ�룬memcpy(p,a,sizeof(a));c++�����鳤��Ϊ: int arr_length = sizeof(arr) / sizeof(arr[0]);sizeof�������ݣ��������顢���������͡��ṹ��ȣ���ռ�ڴ�ռ䣬���ֽ�����ʾ,���ھ�̬���飬sizeof��ֱ�Ӽ��������С,int a[10];char b[]="hello"; sizeof(a)����40; sizeof(b)����6, hello 5���ַ�������'\0';
//		check(false, 0);  // �����
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
//		for (int i = 0; i < 100; i++) {  // ����㣬forѭ��д��while����
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
//int check(bool in, int s) {//in ��ʾ�Ƿ��ջ  
//	for (int i = s; i < 100; i++) {
//		if (output[i] == ')') {
//			if (in == false) {
//				output[i] = '?';//û��ջ֮ǰ����������ֱ�ӽ��б��  
//			}
//			if (in == true) {//��ջ֮��������������ѣ��������ˣ���ջ  
//				output[i] = ' ';
//				output[s - 1] = ' ';
//				return 0;
//			}
//		}
//		if (output[i] == '(') { //����������������ջ��  
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