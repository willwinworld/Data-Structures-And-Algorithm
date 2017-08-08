#include <iostream>
#include <stdio.h> 
using namespace std;
/*
下面的写法定义了一个引用，并将其初始化为引用某个变量。
类型名 & 引用名 = 某变量名;
int n = 4;
int & r = n;  // r引用了n, r的类型是int &
某个变量的引用，等价于这个变量，相当于该变量的一个别名。 

定义引用时一定要将其初始化成引用某个变量。
初始化后，它就一直引用该变量，不会再引用别的变量了。

引用只能引用变量，不能引用常量和表达式。 
*/

/* 
//c语言的写法:

void swap(int *a, int *b){
	int temp;
	tmp = *a; *a = *b; *b = temp;
}

int n1, n2;
swap(&n1, &n2); // n1, n2的值被交换 

//有了c++的引用:
void swap(int &a, int &b){
	int tmp;
	tmp = a; a = b; b = tmp;
}
int n1, n2;
swap(n1, n2);  // n1, n2的值被交换

//引用作为函数的返回值
int n = 4;
int & SetValue(){
	return n;
}

int main(){
	SetValue() = 40;
	cout << n;
	return 0;
}


//常引用
定义引用时，前面加const关键字，即为"常引用"
int n;
const int & r = n;
r的类型是const int &

不能通过常引用去修改其引用的内容
int n = 100;
const int &r = n;
r = 200; // 编译错
n = 300; // 没问题

常引用和非常引用的转换
const T &和T & 是不同的类型!!!(即const int & 和 int &是不同类型) 

T & 类型的引用或T类型的变量可以用来初始化const T &类型的引用。
 
const T类型的常变量和const T &类型的引用则不能用来初始化T &类型的引用，
除非进行强制类型转换。

下面程序片段哪个没错？ 
int n = 4;
int & r = n * 5;  // int型转换int & r 错误 

int n = 6;
const int & r = n;  
r = 7; // const int &型转换int型 错误 

int n = 8;
int & r1 = n;
const int r2 = r1;  //  int & r1型转换const int r2 
*/
 
int main()
{
	int n = 7;
	int & r = n;  // r引用了n,r与n等价了 
	r = 4;
	cout << r; //输出4
	cout << n; //输出4
	n = 5;
	cout << r; //输出5 
	
	double a = 4, b = 5;
	double & r1 = a;
	double & r2 = r1;  // r2也引用a
	r2 = 10;
	cout << a << endl;
	r1 = b;  // r1等于b,并不是r1引用了b，而是用b对r1进行赋值，也就是说r1以及r1引用的东西都与b相等了，r1引用了a 
	cout << a << endl; 
}
