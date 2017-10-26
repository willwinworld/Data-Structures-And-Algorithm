#include <iostream>
#include <stdio.h>
using namespace std;


/*
���������Ϊ��Ա����
����Ϊ��Ա����ʱ����������Ϊ�����Ŀ����һ
*/
class Complex {
public:
	Complex(double r=0.0, double m=0.0):
		real(r), imaginary(m){}   // constructor
	Complex operator+(const Complex &); // addition
	Complex operator-(const Complex &); // subtraction
private:
	double real;  // real part
	double imaginary;  // imaginary part
};

// overloaded addition operator
Complex Complex::operator+(const Complex & operand2) {
	return Complex(real + operand2.real,
		imaginary + operand2.imaginary);
}
// overloaded subtraction operator
Complex Complex::operator-(const Complex & operand2) {
	return Complex(real - operand2.real,
		imaginary - operand2.imaginary);
}

int main() {
	Complex x, y(4.3, 8.2), z(3.3, 1.1);
	x = y + z;
	cout << x.operator+ << endl;
	return 0;
}	
