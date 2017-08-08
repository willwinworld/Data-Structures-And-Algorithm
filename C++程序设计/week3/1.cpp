#include <iostream>
using namespace std;
/*
内联成员函数和重载成员函数
内联函数：插入到调用的地方，就不会产生额外的调用开销了
内联成员函数：1.inline + 成员函数
			  2.整个函数体出现在类定义内部
class B{
	inline void func1();  // 内联函数定义方式一 
	void func2(){  // 内联函数定义方式二 
	
	};
};
void B::func1(){}

成员函数的重载及参数缺省
重载成员函数
成员函数 -- 带缺省参数
class Location {
	private:
		int x, y;
	public: 
		void init(int x=0, int y=0);
		void valueX(int val){x = val;}
		int valueX(){return x;} 
};
*/
class Location {
	private:
		int x, y;
	public: 
		void init(int x=0, int y=0);
		void valueX(int val){x = val;} // 函数1
		int valueX(){return x;}  // 函数2 
};
void Location::init(int X, int Y){
	x = X;
	y = Y;
}
int main(){
	Location A;
	A.init(5);
	A.valueX(5);  // 调用函数1 
	cout << A.valueX(); // 调用函数2 
	return 0;
}

/*
使用缺省参数要注意避免有函数重载时的二义性
class Location{
	private:
	    int x, y;
	public:
		void init(int x = 0, int y = 0);
		void valueX(int val = 0 ){x = val;}  // 函数1 
		int valueX(){return x;}  // 函数2 
};

Location A;
A.valueX();  // 错误，编译器无法判断调用哪个valueX
因为如果是调用函数1，那么默认val=0
如果是调用函数2，那么是无参的 
*/ 
