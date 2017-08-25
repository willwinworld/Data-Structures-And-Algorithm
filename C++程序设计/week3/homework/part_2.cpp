#include <iostream>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
    Sample(Sample &a){v = 2 * a.v;}
// 在此处补充你的代码, 请补足Sample类的成员函数，不能增加成员变量 
};
int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;  // 输出10 
    return 0;
}

