#include <iostream>
using namespace std;
class A {
public:
    int val;
// �ڴ˴�������Ĵ���
	A(){
		val = 0;
	}
	void GetObj(){
		val = 5;
		return val;
	}
};
int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
    /* 
	��������
    0
    
    5
    */
}
/*
A(_________________ ){ val = n; }
    ________________ GetObj() {
        return _________________;
    }
*/
