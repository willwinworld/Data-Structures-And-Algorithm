#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
// 在此处补充你的代码
/*
要求：MyString类必须是从C++的标准类string类派生而来。
提示1：如果将程序中所有 "MyString" 用"string" 替换，
那么题目的程序中除了最后两条语句编译无法通过外，
其他语句都没有问题，而且输出和前面给的结果吻合。
也就是说，MyString类对string类的功能扩充只体现在最后两条语句上面。
提示2: string类有一个成员函数 string substr(int start,int length);
能够求从 start位置开始，长度为length的子串
*/
class MyString:public string {
public:
	MyString() :string() {};
	MyString(const char *s) :string(s) {};
	MyString(const string &s) :string(s) {};
	MyString operator()(int i, int j) {
		return this->substr(i, j);
	}
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
	//输出s1从下标0开始长度为4的子串
	cout << s1(0, 4) << endl;
	//输出s1从下标为5开始长度为10的子串
	cout << s1(5, 10) << endl;
	return 0;
}