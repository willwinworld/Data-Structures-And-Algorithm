#include <iostream>
#include <stdio.h>
using namespace std;

// 函数指针
// 类型名 (*指针变量名)(参数类型1， 参数类型2...）;
// int (*pf)(int, char)
// 表示pf是一个函数指针，它所指向的函数，返回值类型应是int,
// 该函数应有两个参数，第一个是int类型，第二个是char类型。

 
 void PrintMin(int a, int b){
	if(a<b)
		printf("%d", a);
	else
		printf("%d", b);
 }
 
 int main(){
 	void (*pf)(int, int);
 	int x = 4, y = 5;
 	pf = PrintMin;
 	pf(x, y);
 	return 0;
 }
