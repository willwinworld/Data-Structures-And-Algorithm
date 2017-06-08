#include <iostream>
using namespace std;

int count(int m, int n)  // m苹果数，n为盘子数
{
	if (m <= 1 || n <= 0)
		return 1;
	if (m < n)  // 如果苹果数小于盘子数，也就是说即使在每个盘子上只放一个苹果，都还是会有多余的盘子，所以只要将多余的盘子减去就行
		return count(m, m);
	else // 如果苹果数大于盘子数，则可以分成两种情况，1.有盘子空出来（） 2. 没有盘子空出来（减去每一个盘子上放的苹果）
		return count(m, n - 1) + count(m - n, n);  // 至少有一个盘子是空着的，所以是n-1
}

void main()
{
	int apples, plates;
	cin >> apples >> plates;
	cout << count(apples, plates);
}