#include <iostream>
using namespace std;

int main()
{
	int m;
	int n;
	cin >> m >> n;
	int **arr = new int*[m];
	for (int i = 0; i < m; ++i)
		arr[i] = new int[n];
    /*https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new*/
		
	for(int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	for(int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (i - 1 >= 0 && j - 1 >= 0 && i + 1 < m && j + 1 < n){
				if (arr[i][j] >= arr[i-1][j] && arr[i][j] >= arr[i+1][j] && arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i][j+1]){
					cout << i << " " << j << endl;
				}
			}
			else{
				if (i - 1 < 0){
					if (j - 1 < 0){
						if (arr[i][j] >= arr[i][j+1] && arr[i][j] >= arr[i+1][j]){
							cout << i << " " << j << endl;
						}
					}
					else if (j + 1 == n){
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i+1][j]){
							cout << i << " " << j << endl;
						}
					}
					else{
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i][j+1] && arr[i+1][j]){
							cout << i << " " << j << endl;
						}
					}
				}
				else if (i + 1 == m){
					if (j - 1 < 0){
						if (arr[i][j] >= arr[i-1][j] && arr[i][j] >= arr[i][j+1]){
							cout << i << " " << j << endl;
						}
					}
					else if (j + 1 == n){
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i-1][j]){
							cout << i << " " << j << endl;
						}
					}
					else{
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i][j+1] && arr[i][j] >= arr[i-1][j]){
							cout << i << " " << j << endl;
						}
					}
				}
				else if (j - 1 < 0){
					if (i - 1 < 0){
						if (arr[i][j] >= arr[i][j+1] && arr[i][j] >= arr[i+1][j]){
							cout << i << " " << j << endl;	
						}
					}
					else if (i + 1 == m){
						if (arr[i][j] >= arr[i-1][j] && arr[i][j] >= arr[i][j+1]){
							cout << i << " " << j << endl;
						}
					}
					else{
						if (arr[i][j] >= arr[i-1][j] && arr[i][j] >= arr[i+1][j] && arr[i][j] >= arr[i][j+1]){
							cout << i << " " << j << endl;
						}
					}
				}
				else if (j + 1 == n){
					if (i - 1 < 0){
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i+1][j]){
							cout << i << " " << j << endl;
						}
					}
					else if (i + 1 == m){
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i-1][j]){
							cout << i << " " << j << endl;
						}
					}
					else{
						if (arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i-1][j] && arr[i][j] >= arr[i+1][j]){
							cout << i << " " << j << endl;
						}
					}
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}
