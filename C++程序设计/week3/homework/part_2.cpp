#include <iostream>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
    Sample(Sample &a){v = 2 * a.v;}
// �ڴ˴�������Ĵ���, �벹��Sample��ĳ�Ա�������������ӳ�Ա���� 
};
int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;  // ���10 
    return 0;
}

