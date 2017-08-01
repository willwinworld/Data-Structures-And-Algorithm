#include <iostream>
#include <stdio.h> 
using namespace std;
/*
const int MAX_VAL = 23;
const double Pi = 3.14;
const char *SCHOOL_NAME = "Peking University";

不可通过常量指针修改其指向的内容
int n, m;
const int *p = &n;
*p = 5;  // 编译出错，通过常量指针修改所指向的值 
n = 4;   // ok 
p = &m;  // ok, 常量指针的指向可以变化 

不能把常量指针赋值给非常量指针，反过来可以
const int *p1; int * p2;
p1 = p2; // ok
p2 = p1; // error
p2 = (int *)p1; // ok,强制类型转换，就是要让一个常量指针让一个非常量指针指着

函数参数为常量指针时，可避免函数内部不小心改变参数指针所指地方的内容
void myprintf(const char *p){
	strcpy(p, "this"); // 编译出错,strcpy是char *型，而p是const char *p ，不匹配 
	printf("%s", p);  // ok 
}

定义常引用
不能通过常引用修改其引用的变量
int n;
const int &r = n;  // r引用了n 
r = 5; // error
n = 4; // ok 
*/



