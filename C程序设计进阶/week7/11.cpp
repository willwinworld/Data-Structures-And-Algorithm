#include <iostream>
using namespace std;

/*
struct linked{
	
};
*/

int main()
{   
    /*��̬�������ڴ�ռ�*/
	int *pint = new int(1024);  // �����ʼֵ 
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
