#include <iostream>
using namespace std;

/*
struct linked{
	
};
*/

int main()
{   
    /*动态地申请内存空间*/
	int *pint = new int(1024);  // 赋予初始值 
	cout << *pint << endl;
	
	delete pint;
	
	int *pia = new int[4];
	for(int i=0; pia[i] != '\0'; i++){
		pia[i] = 0;		
	}
	cout << pia[0] << endl;
	
	delete [] pia; 
	
	return 0;
}
