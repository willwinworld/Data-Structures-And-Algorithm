#include <iostream>
using namespace std;


int main()
{
	int a, b, c;
	char comma;
	cin >> a >> comma >> b >> comma >> c;
	
	if (a + b == c){
		cout << '+' << endl;
	}
	if (a - b == c){
		cout << '-' << endl;
	}
	if (a / b == c){
		cout << '/' << endl;
	}
	if (a * b == c){
		cout << '*' << endl;
	}
	if (a % b == c){
		cout << '%' << endl;
	}
	else if (a + b != c && a - b != c && a * b != c && a / b != c && a % b != c){
		cout << "error" << endl;
	}
	
	return 0;
}
