#include <iostream>
using namespace std;


int main()
{   
	int dir[][2] = {
		{0, 1}, {1, 0},
		{0, -1}, {-1, 0}
	};
	
	for (int i = 0; i < 4; ++i){  // i < 4 ÒòÎªdir[0] = {0, 1} dir[0][0] = 0 
		cout << dir[i][0] << dir[i][1] << endl;
	}
	cout << '\n';
	cout << dir[0] << endl;
	cout << dir[1] << endl;
	cout << dir[2] << endl;
	cout << dir[3] << endl;
	cout << dir[0][0] << endl;
	cout << dir[0][1] << endl;
	cout << dir[1][0] << endl;
	cout << dir[1][1] << endl;
	return 0;
}
