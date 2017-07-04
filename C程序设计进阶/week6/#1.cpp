#include <iostream>
#include <iomanip>  // 格式控制
#include <vector>

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
    
    cout << endl;
    
    vector<patient> sort;
    int count;
    for (int i=0; i < m; i++)
    {   
    	if (record[i].point > a)
    	{   
//    		cout << setfill('0') << setw(3) << record[i].id << " " << showpoint << setprecision(2) << record[i].point << endl;
    		patient t;
    		t.id = record[i].id;
    		t.point = record[i].point;
    		sort.push_back(t);
    		count += 1;
    	}
    }
    
    cout << endl;
    
    cout << sizeof(sort)/sizeof(sort[0]) << endl;
    int length = sizeof(sort) / sizeof(sort[0]);
    cout << endl;
    // bubble sort
	for (int i=0; i<length-1; i++){
		for(int j=0; j<length-i-1; j++){
			if (sort[j-1].point < sort[j].point){
				float tmp = sort[j-1].point; 
				sort[j-1].point = sort[j].point;
				sort[j].point = tmp;
			}
		}
	}
	
	cout << endl;
	
	for(int i=0; i < count-1; i++)
    {
    	cout << setfill('0') << setw(3) << sort[i].id << " " << showpoint << setprecision(2) << sort[i].point << endl;
    }
}

int main()
{   
    deal();
    
    return 0;
}
