#include <iostream>
#include <stdio.h> 
using namespace std;
/*
结构化程序设计的思考
结构化程序设计
复杂的大问题->层层分解/模块化->若干子问题
自顶向下，逐步求精
程序=数据结构+算法
程序=变量+函数
面向对象的程序=类+类+...+类

客观事物->类
写一个程序，输入矩形的宽和高，输出面积和周长
class CRectangle {
	public int w, h;  // 宽，高 
	void init(int w_, int h_){
		w = w_; h = h_;
	}	
	int Area(){
		return w*h;
	}
	int Perimeter(){
		return 2*(w+h);
	}
};  //必须有分号

int main(){
	int w, h;
	CRectangle r; // r是一个对象
	cin >> w >> h;
	r.init(w, h);
	cout << r.Area() << endl << r.Perimeter();
	return 0; 
}

对象的内存分配

对象的内存空间
对象的大小=所有成员变量的大小之和
E.g. CRectangle类的对象，sizeof(CRectangle) = 8  // 两个int型的大小 
每个对象各有自己的存储空间
一个对象的某个成员变量被改变，不会影响到其他的对象 

对象间的运算
对象之间可以用'='进行赋值
不能用'==', '!=', '>', '<', '>=', '<='进行比较
除非这些运算符经过了"重载"

访问类的成员变量和成员函数
用法1：对象名.成员名
CRectangle r1, r2;
r1.w = 5;
r2.init(3, 4); 

用法2:指针->成员名
CRectangle r1, r2;
CRectangle * p1 = & r1;
CRectangle * p2 = & r2;
p1->w = 5;
p2->init(3,4);  // init作用在p2指向的对象上

用法3：引用名.成员名
CRectangle r2;
CRectangle & rr = r2;  // rr引用r2 

rr.w = 5;
rr.init(3, 4);  // rr的值变了，r2的值也变

另一种输出结果的方式
void PrintRectangle(CRectangle &r){
	cout << r.Area() << "," << r.Perimeter();
}
CRectangle r3;
r3.init(3, 4);
PrintRectangle(r3);

类的成员函数的另一种写法
class CRectangle{
	public:
		int w, h;
		int Area();  // 成员函数仅在此处声明
		int Perimeter();
		void Init(int w_, int h_);  
};

int CRectangle::Area(){
	return w*h;
}
int CRectangle::Perimeter(){
	return 2*(w+h);
}
void CRectangle::Init(int w_, int h_){
	w = w_; h = h_;
}
调用通过:对象/对象的指针/对象的引用 
*/
