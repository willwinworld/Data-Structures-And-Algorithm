#include <iostream>
using namespace std;


struct Point{
	int x;
	int y;
};


int main()
{   
    int size;
    cin >> size;
    Point *array = new Point[size];  // 动态数组里面含有struct 
    for (int i = 0; i < size; i++){
    	cin >> array[i].x >> array[i].y;
    }
//    for (int i = 0; i < size; i++){
//    	cout << array[i].x << ',' << array[i].y << ',';
//    }
	bool flag = true;
	for (int i = 0; i < size; i++){
		flag = true;
		for (int j = 0; j < size; j++){
			if (i != j){
				if (array[i].x <= array[j].x && array[i].y <= array[j].y){
					flag = false;
					break;
				}
			}
		}
		if (flag){
			cout << '(' << array[i].x << ',' << array[i].y << ')' << ',';
		}
	}
	
	
	delete [] array;
	return 0;
}
