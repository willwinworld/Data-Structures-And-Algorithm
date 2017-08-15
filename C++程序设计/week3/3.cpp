#include <iostream>
using namespace std;
/*
复制构造函数： 
只有一个参数，即对同类对象的引用。
形如 X::X(X&)或X::X(const X &),二者选一 
后者能以常量对象作为参数
如果没有定义复制构造函数，那么编译器生成默认
复制构造函数。默认的复制构造函数完成复制功能。
*/
class Complex{
	private:
		double real, imag;
};
/*
写的Complex类并没有任何构造函数
但实际上我们知道应该至少有两个构造函数
一个是编译器构造函数
另外一个就是编译器自动生成的默认复制构造函数
*/
Complex c1; // 无参构造函数初始c1,调用缺省无参构造函数
Complex c2(c1); // 默认复制构造函数初始c2,调用缺省的复制构造函数，把c1的所有成员变量都复制到c2中去了，将c2初始化和c1一样
 
/*
如果定义的自己的复制构造函数，
则默认的复制构造函数不存在。 
*/ 
class Complex{
	public:
		double real, imag;
	Complex(){}
	Complex(const Complex & c){
		real = c.real;
		imag = c.imag;
		cout << "Copy Constructor called";
	}
};
Complex c1;  
Complex c2(c1);  // 调用自己定义的复制构造，输出Copy Constructor called. 


/*
不允许有形如X::X(X)的构造函数。 
*/
 class CSample{
 	CSample(CSample c){
 	}  //错，不允许这样的构造函数 
 };
 
 /*
复制构造函数起作用的三种情况
1) 当用一个对象去初始化同类的另一个对象时。
*/
Complex c2(c1);
Complex c2 = c1; // 初始化语句，非赋值语句

/*
2)如果某函数有一个参数是类A的对象，
那么该函数被调用时，类A的复制构造函数将被调用。
*/
class A
{
	public:
	A() {};
	A(A &a){
		cout << "Copy constructor called" << endl;	
	}
};

void Func(A a1){}
int main(){
	A a2;
	Func(a2);
	return 0;
}
// 程序输出结果为：Copy constructor called


/*
3)如果函数的返回值是类A的对象时，则函数返回时，
A的复制构造函数被调用:
*/ 
class A
{
	public:
		int v;
	A(int n) {v = n;};
	A(const A & a){
		v = a.v;
		cout << "Copy constructor called" << endl;
	}
};

A Func(){
	A b(4);
	return b;
}

int main(){
	cout << Func().v << endl;
	return 0;
}
