#include <iostream>
#include <stdio.h> 
using namespace std;
/*
内联函数
函数调用是有时间开销的。如果函数本身只有几条语句，
执行非常快，而且函数被反复执行很多次，相比之下调用
函数所产生的这个开销就会显得比较大。

为了减少函数调用的开销，引入了内联函数机制。编译器
处理对内联函数的调用语句时，是将整个函数的代码插入
到调用语句处，而不会产生调用函数的语句。 
*/

/*
内联函数:在函数定义前面加"inline"关键字，可定义内联函数
inline int Max(int a, int b){
	if(a>b)return a;
	return b;
}

k = Max(n1, n2);
if(n1 > n2)
	tmp = n1;
else
	tmp = n2;
k = tmp;
*/ 

/*
函数重载
一个或多个函数，名字相同，然而参数个数
或参数类型不相同，这叫做函数的重载。
以下三个函数是重载关系： 
(1)int Max(double f1, double f2){}
(2)int Max(int n1, int n2){}
(3)int Max(int n1, int n2, int n3){}
函数重载使得函数命名变得简单。
编译器根据调用语句中的实参的个数
和类型判断应该调用哪个函数。

Max(3.4, 2.5);  //调用(1)
Max(2, 4);      //调用(2)
Max(1, 2, 3);   //调用(3)
Max(3, 2.4);    //error, 二义性  
*/

