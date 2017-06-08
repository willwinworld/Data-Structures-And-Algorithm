#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;

bool isvalueinarray(int val, int *arr, int size){
	for (int i = 0; i < size; i++){
		if (arr[i] == val)
			return true;
	}
	return false;
}

int main()
{
	int row, col;
	cin >> row >> col;
	int matrix[101][101];
	for(int i=0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> matrix[i][j];
			cout << " ";
		}
		cout << endl; 
	}
	
	/*思路：
	i+j in range(j)
	i行 j列
	sum = i + j 在j列形成的数组中 
	*/
	
	int *array = NULL;
	array = (int*)calloc(col, sizeof(int));
	int array_length = sizeof(array) / sizeof(array[0]);
//    int *pointer = NULL;
    for (int i=0; i<col; i++){
    	array[i] = i;
    }
//    for (pointer=l; *pointer != '\0'; pointer++){
//    	cout << *(pointer++) << endl;
//    }
//    for (int i=0; i<col; i++){
//    	cout << array[i] << endl;
//    } 
    int res;
    for (int i=0; i<row; i++){
    	for (int j=0; j<col; j++){
    		int sum = i + j;
    		bool check = isvalueinarray(sum, array, array_length);
    		if (check)
    			res += matrix[i][j];
    	}
    } 
    cout << res << endl;
    return 0;
    /*
    python 写法 
    l = [0, 1, 2, 3]  
	for i in range(4):
		for j in range(3):
			sum = i + j
			if sum in l:
				print(i, j) 
	*/
} 
