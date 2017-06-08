#include<iostream>
using namespace std;

int main()
{
//	int a[4][4] = {{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 0, 1, 0}, {0, 0, 0, 0}};
//	/*第一行*/ 
//	cout << **a << endl;
//	cout << *(*a + 1) << endl; 
//	cout << *(*a + 2) << endl;
//	cout << *(*a + 3) << endl;
//	
//	cout << endl;
//	
//	/*第一列*/
//	cout << *(*(a)) << endl;
//	cout << *(*(a+1)) << endl;
//	cout << *(*(a+2)) << endl;
//	cout << *(*(a+3)) << endl;
//	
//	cout << endl;
//	
//	/*第四行*/
//	cout << *(*(a+3)) << endl;
//	cout << *(*(a+3)+1) << endl;
//	cout << *(*(a+3)+2) << endl;
//	cout << *(*(a+3)+3) << endl;
//	
//	cout << endl;
//	
//	/*第四列*/
//	cout << *(*a+3) << endl;
//	cout << *(*(a+1)+3) << endl;
//	cout << *(*(a+2)+3) << endl;
//	cout << *(*(a+3)+3) << endl;
	
	int k;
	cin >> k;
	
	for(int i=0; i<k; i++){
		int row, col;
		cin >> row >> col;
		
		int a[10][10] = {0};
		for(int i=0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin >> a[i][j];
				cout << " ";
			}
			cout << endl; 
		}
		
		int res;
		for (int i=0; i<row; i++){
			res += *(*a + i);  // 加第一行 
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+i)); // 加第一列
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+row-1)+i);  // 加第四行 
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+i)+row-1);  // 加第四列 
		}
		cout << res << endl;
		/*减去边角重复元素*/
		
		cout << **a << endl;
		cout << *(*a + row-1) << endl;
		cout << *(*(a+row-1)) << endl;
		cout << *(*(a+row-1)+row-1) << endl;
		res = res - **a -  *(*a + row-1) - *(*(a+row-1)) - *(*(a+row-1)+row-1);
		
		cout << res << endl;
		a[10][10] = {0};  // 结尾置零 
		res = 0;  // 结尾置零 
	} 
	
	
//	for(int i=0; i < row; i++){
//		for(int j = 0; j < col; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl; 
//	}

	return 0;
}
