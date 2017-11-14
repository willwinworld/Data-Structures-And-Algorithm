#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
// �ڴ˴�������Ĵ���
/*
Ҫ��MyString������Ǵ�C++�ı�׼��string������������
��ʾ1����������������� "MyString" ��"string" �滻��
��ô��Ŀ�ĳ����г�����������������޷�ͨ���⣬
������䶼û�����⣬���������ǰ����Ľ���Ǻϡ�
Ҳ����˵��MyString���string��Ĺ�������ֻ�������������������档
��ʾ2: string����һ����Ա���� string substr(int start,int length);
�ܹ���� startλ�ÿ�ʼ������Ϊlength���Ӵ�
*/
class MyString :public string
{
	// �ڴ˴���ʼ������Ĵ���
public:
	MyString() :string() {}
	MyString(const char *pstr) :string(pstr) {}
	//���������ֿ��õ���ʽ
	//MyString(const MyString & rhs) :string(rhs.string::c_str()) {}
	//��������������������������ĸ�ֵ���ݹ���ȷ��Ӧ��ѡȡ���յ���һ����ʽ
	//��ʾָ����Ҫ���������Ϊ��������ʱ�����������������ȡ����֮�������˵ڶ�����ʽ
	MyString(const MyString & rhs) :string(rhs) {}
	MyString & operator=(const MyString & rhs)
	{
		string::assign(rhs.string::c_str());
		return *this;
	}
	friend MyString operator+(const MyString & x, const MyString & y)
	{
		MyString temp(x);
		temp.string::append(y.string::c_str());
		return temp;
	}
	friend MyString operator+(const MyString & x, const char * pstr)
	{
		MyString temp(pstr);
		return x + temp;
	}
	friend MyString operator+(const char * x, const MyString & y)
	{
		MyString temp(x);
		return temp + y;
	}
	friend ostream & operator<<(ostream & os, const MyString &rhs)
	{
		os << rhs.string::c_str();
		return os;
	}
	MyString operator()(int b, int len)
	{
		string s(string::c_str());
		s = s.substr(b, len);
		return MyString(s.c_str());
	}
	// �ڴ˴������㲹��Ĵ���
};


int CompareString(const void * e1, const void * e2) {
	MyString * s1 = (MyString *)e1;
	MyString * s2 = (MyString *)e2;
	if (*s1 < *s2)     return -1;
	else if (*s1 == *s2) return 0;
	else if (*s1 > *s2) return 1;
}
int main() {
	MyString s1("abcd-"), s2, s3("efgh-"), s4(s1);
	MyString SArray[4] = { "big","me","about","take" };
	cout << "1. " << s1 << s2 << s3 << s4 << endl;
	s4 = s3;    s3 = s1 + s3; 
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;
	s2 = s1;    s1 = "ijkl-";
	s1[2] = 'A';
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = "qrst-" + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
	qsort(SArray, 4, sizeof(MyString), CompareString);
	for (int i = 0; i < 4; ++i)
		cout << SArray[i] << endl;
	//���s1���±�0��ʼ����Ϊ4���Ӵ�
	cout << s1(0, 4) << endl;
	//���s1���±�Ϊ5��ʼ����Ϊ10���Ӵ�
	cout << s1(5, 10) << endl;
	getchar();
	return 0;
}