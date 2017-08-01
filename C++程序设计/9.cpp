#include <iostream>
#include <stdio.h> 
using namespace std;
/*
函数的缺省参数：
c++中，定义函数的时候可以让最右边的连续若干个参数
有缺省值，那么调用函数的时候，若相应位置不写参数，
参数就是缺省值。
void func(int x1, int x2 = 2, int x3 = 3){}

func(10);  // 等效于func(10,2,3)
func(10,8); // 等效于func(10,8,3)
func(10,,8); // 不行，只能最右边的连续若干个参数缺省

函数的缺省参数：
函数参数可缺省的目的在于提高程序的可扩充性。
即如果某个写好的函数要添加新的参数，而原来那些
调用该函数的语句，未必需要使用新增的参数，那么
为了避免对原先那些函数调用语句的修改，就可以使用
缺省参数。 
*/ 
