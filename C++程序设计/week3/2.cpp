#include <iostream>
using namespace std;
/*
���캯��(constructor)
��Ա������һ��
	������������ͬ�������в����������з���ֵ(voidҲ����)
	�����ǶԶ�����г�ʼ���������Ա��������ֵ
	���������ʱûд���캯���������������һ��Ĭ�ϵ��޲����Ĺ��캯��
	Ĭ�Ϲ��캯���޲����������κβ���
	��������˹��캯�����������������Ĭ�ϵ��޲����Ĺ��캯��
	��������ʱ���캯���Զ������ã�����һ�����ɣ�����Ҳ����������ִ�й��캯��
	һ��������ж�����캯��
Ϊʲô��Ҫ���캯����
1.���캯��ִ�б�Ҫ�ĳ�ʼ�����������˹��캯����
�Ͳ���ר����д��ʼ��������
Ҳ���õ������ǵ��ó�ʼ��������
2.��ʱ����û����ʼ����ʹ�ã��ᵼ�³������ 
*/ 
//class Complex {
//	private:
//		double real, imag;
//	public:
//		void Set(double r, double i);
//};  // �������Զ�����Ĭ�ϵĹ��캯��
//
//Complex c1; // Ĭ�Ϲ��캯�������ã�������Ĭ���޲ι��캯�� 
//Complex * pc = new Complex; // Ĭ�Ϲ��캯�������� 
//
//
//class Complex{
//	private:
//		double real, imag;
//	public:
//		Complex(double r, double i=0);
//};
//
//Complex::Complex(double r, double i){
//	real = r; imag = i;
//}
//Complex c1; // error, ȱ�ٹ��캯���Ĳ���
//Complex * pc = new Complex; // error, û�в���
//Complex c1(2); // ok
//Complex c1(2, 4), c2(3, 5);
//Complex * pc = new Complex(3, 4);
//
//
//class Complex {
//	private:
//		double real, imag;
//	public:
//		/*�����ж�����캯�����������������Ͳ�ͬ�Ϳ���*/
//		void Set(double r, double i);
//		Complex(double r, double i);
//		Complex(double r);
//		Complex(Complex c1, Complex c2);
//}; 
//Complex::Complex(double r, double i)
//{
//	real = r;
//	imag = i;
//}
//Complex::Complex(double r)  // ���Խ�����ת����double 
//{
//	real = r;
//	imag = 0;
//}
//Complex::Complex(Complex c1, Complex c2)
//{
//	real = c1.real + c2.real;
//	imag = c1.imag + c2.imag;
//}
//Complex c1(3), c2(1, 0), c3(c1, c2);


/*���캯���������е�ʹ��*/
class CSample{
	int x;
	public:
		CSample(){
			cout << "Constructor 1 Called" << endl;
		}
		CSample(int n){
			x = n;
			cout << "Constructor 2 Called" << endl;
		}
}; 

int main(){
	CSample array1[2];  // �޲Σ��޲� 
	cout << "step1" << endl;
	
	CSample array2[2] = {4, 5};  // �вΣ��в� 
	cout << "step2" << endl;
	
	CSample array3[2] = {3};  // �вΣ��޲� 
	cout << "step3" << endl;
	
	CSample * array4 = new CSample[2];  // �޲Σ��޲� 
	delete []array4;
	return 0;
}

// ���캯���������е�ʹ�� 
class Test{
	public:
		Test(int n){}  // (1)
		Test(int n, int m){} // (2)
		Test(){}  // (3)
};
Test array1[3] = {1, Test(1,2)};
//����Ԫ�طֱ���(1),(2),(3)��ʼ��

Test array2[3] = {Test(2,3), Test(1,2), 1};
//����Ԫ�طֱ���(2),(2),(1)��ʼ�� 

Test *pArray[3] = {new Test(4), new Test(1,2)}; // ָ�����飬�����Ƕ�������
// �������һ���������������󣬶�����3��������Ԫ�طֱ���(1),(2)��ʼ�� 

