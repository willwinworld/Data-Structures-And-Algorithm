#include<iostream>  
#include <iomanip>  
#include <cstdio>  
using namespace std;  
int main() {  
    float patient[50];  
    int number[50];  
    int n;//���˸���  
    float level;//�������س̶�  
    cin >> n >> level;  
    for (int i = 0; i < n; i++) {  
        cin >> number[i] >> patient[i];  
    }  
    bool be = false;//ȷ���Ƿ��в���ס��ICU��Ĭ��Ϊ��  
    for (int i = 0; i < n; i++) {  
        if (patient[i]>=level) {  
            be = true;  
            /*ð�ݣ���ס��ICU�Ĳ��ˣ���С��������*/  
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
    /*�����ǿ��������ʽ�ģ����ǰٶȵ�*/  
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
