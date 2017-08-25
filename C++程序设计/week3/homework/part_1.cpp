#include <iostream>
using namespace std;
class A {
public:
    int val;
// 在此处补充你的代码
	
	A(int n = 0){
		val = n;  // 构造函数 
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
