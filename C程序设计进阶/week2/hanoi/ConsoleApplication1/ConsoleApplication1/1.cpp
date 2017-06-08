#include <iostream>
using namespace std;

/*
要实现：move(n, A, B, C)
需进行：move(n-1, A, C, B)  除了最底部最大的盘子，将上面的n-1盘子移动
       move n from A to C
	   move(n-1, B, A, C)
*/
void move(int m, char x, char y, char z)  // 将m个盘子从A经过B移动到C 
{
	if (m == 1)
	{
		cout << "把一个盘子从" << x << "移动到" << z << endl;
	}
	else
	{
		move(m - 1, x, z, y);
		cout << "把一个盘子从" << x << "移动到" << z << endl;  // x上面剩下的最后一个盘子，从x移动到z
		move(m - 1, y, x, z);
	}
}

int main()
{
	int n;
	cout << "请输入盘数n = ";
	cin >> n;
	cout << "在3根柱子上移" << n << "只盘的步骤为:" << endl;
	move(n, 'A', 'B', 'C');
	return 0;
}

