#include <iostream>
using namespace std;
class A {
public:
    int val;
// 在此处补充你的代码
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
	输出结果是
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
