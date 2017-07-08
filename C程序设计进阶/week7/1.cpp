#include <iostream>
using namespace std;


//int *test()
//{
//	int arr[3] = {0, 1, 2};
//	
//	return arr;
//}

int main()
{
//	int *a = NULL;
//	a = test();
//	
//	cout << *a << endl;
	int arr[3] = {10, 11, 12};
	int *p = NULL;
	
	for(p=arr; *p != '\0'; p++)
	{
		cout << *p << endl; 
	} 
	
//	cout << *arr << endl;
//	cout << *(arr+1) << endl;
//	cout << *(arr+2) << endl;
	
	for (p=arr; *p != '\0'; p++)
	{
		cout << *p << endl;
	}
	return 0;
}
