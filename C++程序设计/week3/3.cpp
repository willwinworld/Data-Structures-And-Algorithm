#include <iostream>
using namespace std;
/*
���ƹ��캯���� 
ֻ��һ������������ͬ���������á�
���� X::X(X&)��X::X(const X &),����ѡһ 
�������Գ���������Ϊ����
���û�ж��帴�ƹ��캯������ô����������Ĭ��
���ƹ��캯����Ĭ�ϵĸ��ƹ��캯����ɸ��ƹ��ܡ�
*/
class Complex{
	private:
		double real, imag;
};
/*
д��Complex�ಢû���κι��캯��
��ʵ��������֪��Ӧ���������������캯��
һ���Ǳ��������캯��
����һ�����Ǳ������Զ����ɵ�Ĭ�ϸ��ƹ��캯��
*/
Complex c1; // �޲ι��캯����ʼc1,����ȱʡ�޲ι��캯��
Complex c2(c1); // Ĭ�ϸ��ƹ��캯����ʼc2,����ȱʡ�ĸ��ƹ��캯������c1�����г�Ա���������Ƶ�c2��ȥ�ˣ���c2��ʼ����c1һ��
 
/*
���������Լ��ĸ��ƹ��캯����
��Ĭ�ϵĸ��ƹ��캯�������ڡ� 
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
Complex c2(c1);  // �����Լ�����ĸ��ƹ��죬���Copy Constructor called. 


/*
������������X::X(X)�Ĺ��캯���� 
*/
 class CSample{
 	CSample(CSample c){
 	}  //�������������Ĺ��캯�� 
 };
 
 /*
���ƹ��캯�������õ��������
1) ����һ������ȥ��ʼ��ͬ�����һ������ʱ��
*/
Complex c2(c1);
Complex c2 = c1; // ��ʼ����䣬�Ǹ�ֵ���

/*
2)���ĳ������һ����������A�Ķ���
��ô�ú���������ʱ����A�ĸ��ƹ��캯���������á�
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
// ����������Ϊ��Copy constructor called


/*
3)��������ķ���ֵ����A�Ķ���ʱ����������ʱ��
A�ĸ��ƹ��캯��������:
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
