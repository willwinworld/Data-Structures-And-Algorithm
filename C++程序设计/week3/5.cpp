#include <iostream>
using namespace std;
/*
构造函数：
成员函数的一种
名字与类名相同
可以有参数，不能有返回值
可以有多个构造函数
用来初始化对象

当对象消亡的时候，是不是也会有一个函数对这个消亡的工作做一些处理呢？
所以就产生出了析构函数来完成这件事

析构函数(Destructor)
成员函数的一种
名字与类名相同
在前面加'~'
没有参数和返回值
一个类最多只有一个析构函数

对象消亡时 -> 自动被调用
在对象消亡前做善后工作
释放分配的空间等
*/
