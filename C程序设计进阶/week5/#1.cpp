#include<iostream>
using namespace std;

int main()
{
//	int a[4][4] = {{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 0, 1, 0}, {0, 0, 0, 0}};
//	/*��һ��*/ 
//	cout << **a << endl;
//	cout << *(*a + 1) << endl; 
//	cout << *(*a + 2) << endl;
//	cout << *(*a + 3) << endl;
//	
//	cout << endl;
//	
//	/*��һ��*/
//	cout << *(*(a)) << endl;
//	cout << *(*(a+1)) << endl;
//	cout << *(*(a+2)) << endl;
//	cout << *(*(a+3)) << endl;
//	
//	cout << endl;
//	
//	/*������*/
//	cout << *(*(a+3)) << endl;
//	cout << *(*(a+3)+1) << endl;
//	cout << *(*(a+3)+2) << endl;
//	cout << *(*(a+3)+3) << endl;
//	
//	cout << endl;
//	
//	/*������*/
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
			res += *(*a + i);  // �ӵ�һ�� 
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+i)); // �ӵ�һ��
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+row-1)+i);  // �ӵ����� 
		}
		cout << res << endl;
		for (int i=0; i<row; i++){
			res += *(*(a+i)+row-1);  // �ӵ����� 
		}
		cout << res << endl;
		/*��ȥ�߽��ظ�Ԫ��*/
		
		cout << **a << endl;
		cout << *(*a + row-1) << endl;
		cout << *(*(a+row-1)) << endl;
		cout << *(*(a+row-1)+row-1) << endl;
		res = res - **a -  *(*a + row-1) - *(*(a+row-1)) - *(*(a+row-1)+row-1);
		
		cout << res << endl;
		a[10][10] = {0};  // ��β���� 
		res = 0;  // ��β���� 
	} 
	
	
//	for(int i=0; i < row; i++){
//		for(int j = 0; j < col; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl; 
//	}

	return 0;
}
