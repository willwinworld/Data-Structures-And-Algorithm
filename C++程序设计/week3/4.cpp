#include <iostream>
using namespace std;
/*
����ת�����캯��
Ŀ��:
ʵ�����͵��Զ�ת��
�ص�:
ֻ��һ������
���Ǹ��ƹ��캯��
����ϵͳ���Զ�����->ת�����캯��
->����һ����ʱ����/��ʱ���� 
*/
class Complex{
	public:
		double real, imag;
		Complex(int i){  // ����ת�����캯��
			cout << "IntConstructor called" << endl;
			real = i; imag = 0;	
		}
		Complex(double r, double i){
			real = r; imag = i;
		}
};

int main(){
	Complex c1(7, 8);
	Complex c2 = 12;
	c1 = 9;  // 9���Զ�ת����һ����ʱComplex����
	cout << c1.real << "," << c1.imag << endl;
	return 0;
}