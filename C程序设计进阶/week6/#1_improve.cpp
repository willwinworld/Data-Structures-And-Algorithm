#include<iostream>  
#include <iomanip>  
#include <cstdio>  
using namespace std;  
int main() {  
    float patient[50];  
    int number[50];  
    int n;//病人个数  
    float level;//病情严重程度  
    cin >> n >> level;  
    for (int i = 0; i < n; i++) {  
        cin >> number[i] >> patient[i];  
    }  
    bool be = false;//确认是否有病人住在ICU，默认为无  
    for (int i = 0; i < n; i++) {  
        if (patient[i]>=level) {  
            be = true;  
            /*冒泡，把住在ICU的病人，从小到大排序*/  
            for (int j = i + 1; j < n; j++) {  
                if (patient[j] >= level&&patient[j]>patient[i]) {  
                    float temp;  
                    temp= patient[j];  
                    patient[j]= patient[i];  
                    patient[i] = temp;  
                    int temp1;  
                    temp1 = number[j];  
                    number[j] = number[i];  
                    number[i] = temp1;  
                }  
            }  
        }  
    }  
    if (be == false) {  
        cout << "None." << endl;  
        return 0;  
    }  
    /*这里是考察输出格式的，又是百度的*/  
    else {  
        for (int i = 0; i < n; i++) {  
            if (patient[i] >= level)  
            {  
                printf("%03d", number[i]);  
                    cout<< ' '<<setiosflags(ios::fixed) << setprecision(1) <<patient[i] << endl;  
            }             
        }  
        return 0;  
    }  
}  
