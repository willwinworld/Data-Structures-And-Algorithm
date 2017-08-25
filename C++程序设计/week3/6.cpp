#include <iostream>
using namespace std;


/*
静态成员变量和静态成员函数
静态成员：在说明前面加了static关键字的成员 
*/
class CRectangle{
	private:
		int w, h;
		static int nTotalArea; // 静态成员变量
		static int nTotalNumber;
	public:
		CRectangle(int w_, int h_);
		~CRectangle();
		static void PrintTotal(); // 静态成员函数 
};


/*普通成员变量每个对象有各自的一份，而静态成员变量一共就一份，
为所有对象共享，sizeof运算符不会计算静态成员变量*/
class CMyclass{
	int n;
	static int s;
};
//则 sizeof(CMyclass)等于4

/*普通成员函数必须具体作用于某个对象，而静态成员
函数并不具体作用于某个对象，因此静态成员不需要通过
对象就能访问*/


/*
如何访问静态成员
类名::成员名
CRectangle::PrintTotal();

对象名，成员名
CRectangle r; r.PrintTotal();

指针->成员名
CRectangle *p = &r; p->PrintTotal();

引用.成员名
CRectangle & ref = r; int n = ref.nTotalNumber; 
*/ 


/*静态成员变量本质上是全局变量，哪怕一个对象都不存在，
类的静态成员变量也存在 
*/
 
 
