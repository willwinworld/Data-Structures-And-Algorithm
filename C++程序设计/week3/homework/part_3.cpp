#include <iostream>
using namespace std;

class Base {
public:
    int k; 
    Base(int n):k(n) { }  // ��ʼ���б�ȡ����ͳ k = n�ĳ�ʼ����ʽ  
};
class Big  {
public:
    int v; Base b;
// �ڴ˴�������Ĵ���, �벹��Sample��ĳ�Ա�������������ӳ�Ա����
/*
��ȱ�������������ʽ��
Big ________________{ }
Big ________________{ }
*/
	Big(int n):v(n), b(n){};  // ��Ա�����������Լ���ʼ���б� 
	Big(Big &a):v(a.v), b(a.v){};
};
int main()  {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;  // ���5��5 
    cout << a2.v << "," << a2.b.k << endl;  // ���5��5  
    return 0;
}


