#include <iostream>
using namespace std;
class A {
public:
    int val;
// �ڴ˴�������Ĵ���
	
	A(int n = 0){
		val = n;  // ���캯�� 
	}
	A& GetObj(){
		return *this;  
	}
};
int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
    
    return 0;
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
