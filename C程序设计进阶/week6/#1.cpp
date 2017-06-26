#include <iostream>
#include <iomanip>
using namespace std;


struct patient
{
	int id;
	float point;
};

void deal()
{
	int m; // 病人的个数
	float a; // 最低严重值a 
	cin >> m >> a;
	struct patient record[51];
    for (int i=0; i < m; i++)
	{
    	cin >> record[i].id >> record[i].point;
    }
    for (int i=0; i < m; i++)
    {
    	if (record[i].point > a)
    	{
    		cout << setfill('0') << setw(3) << record[i].id << " " << record[i].point << endl;
    	}
    }
}

int main()
{   
    deal();
    
    return 0;
}
