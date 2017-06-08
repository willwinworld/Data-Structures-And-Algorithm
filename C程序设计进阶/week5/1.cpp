#include <iostream>
using namespace std;

int fun(){

    int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, };

    int *p = a + 5, *q = NULL;

    *q = *(p + 5);

    cout << *p << " " << *q << endl;

    return 0;

}

int main()
{
	fun();
} 
