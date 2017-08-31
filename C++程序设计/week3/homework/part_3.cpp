#include <iostream>
using namespace std;

class Base {
public:
    int k; 
    Base(int n):k(n) { }  // 初始化列表，取代传统 k = n的初始化方式  
};
class Big  {
public:
    int v; Base b;
// 在此处补充你的代码, 请补足Sample类的成员函数，不能增加成员变量
/*
所缺代码具有如下形式：
Big ________________{ }
Big ________________{ }
*/
	Big(int n):v(n), b(n){};  // 成员函数与封闭类以及初始化列表 
	Big(Big &a):v(a.v), b(a.v){};
};
int main()  {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;  // 输出5，5 
    cout << a2.v << "," << a2.b.k << endl;  // 输出5，5  
    return 0;
}


