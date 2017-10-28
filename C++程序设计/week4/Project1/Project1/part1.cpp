#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


class Complex {
private:
	double r, i;
public:
	void Print() {
		cout << r << "+" << i << "i" << endl;
	}
	// 在此处补充你的代码
	// 构造函数
	Complex(double real = 0.0, double imaginary = 0.0) {
		r = real;  // real part
		i = imaginary;  // imaginary part
	}
	Complex & operator=(string s) {
		int position = s.find("+", 0);
		string firstPart = s.substr(0, position);  // substr参数含义：第一个参数是开始位置，第二个参数是字符串的长度，而不是字符串结束位置
		string secondPart = s.substr(position + 1, s.length() - position - 2);
		r = atof(firstPart.c_str());
		i = atof(secondPart.c_str());
		return *this;
	}
	/*Complex(double real = 0.0, double imaginary = 0.0):
		r(real), i(imaginary){}
	Complex operator=(const Complex &);*/
};

//Complex Complex::operator=(const Complex & operand2) {
//	return Complex(r = operand2.r,
//		           i = operand2.i);
//}

int main() {
	Complex a;
	a = "3+4i"; a.Print();
	a = "5+6i"; a.Print();
	getchar();
	return 0;
}
