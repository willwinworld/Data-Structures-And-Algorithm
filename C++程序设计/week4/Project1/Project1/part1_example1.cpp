//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
///*运算符重载为普通函数*/
//class Complex {
//	public:
//		Complex(double r = 0.0, double i = 0.0) {
//			real = r;
//			imaginary = i;
//		}
//		double real;   // real part
//		double imaginary; // imaginary part
//};
//
//
//Complex operator+(const Complex & a, const Complex & b) {
//	return Complex(a.real + b.real, a.imaginary + b.imaginary);
//}
//
//int main() {
//	Complex a(1, 2), b(2, 3), c;
//	c = a + b;
//	cout << c.real << c.imaginary << endl;
//	getchar();
//}