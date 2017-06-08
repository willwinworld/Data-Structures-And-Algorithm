#include <iostream>
using namespace std;


int kakutani_conjecture(int n)
{
	if (n == 1) {
		cout << "End" << endl;
		return 0;
	}
	else {
		if (n % 2 == 0) {
			cout << n << '/' << 2 << '=' << n / 2 << endl;
			n = n / 2;
			kakutani_conjecture(n);
			return 0;
		}
		else if (n % 2 != 0) {
			cout << n << '*' << 3 << '+' << 1 << '=' << n * 3 + 1 << endl;
			n = n * 3 + 1;
			kakutani_conjecture(n);
			return 0;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	kakutani_conjecture(n);
	return 0;
}