#include <iostream>
#include <string.h> 
using namespace std;
#define MAX 40
#define LINE 80 
// ����д������233333 ��) 
/*
1.n:Ӣ�Ķ����е��ʵ���Ŀ��ÿ�����ʳ��Ȳ�����40����ĸ
2.ÿ�в�����80���ַ�
3.ע����windows�±�̿���̨Ĭ��Ϊ80�ַ���ȣ�����80���ַ����Զ����У�
���������²�һ����ˣ����Բ��������⴦��
*/
//int main()  
//{  
//    int words = 0, sum = 0;  
//    cin >> words;  // Ӣ�Ķ����е��ʵ���Ŀ 
//    char str[41]={0};  // ÿ�����ʳ��Ȳ�����40����ĸ 
//    for (int i = 0; i < words; i++)  
//    {  
//        cin >> str;  
//        if (sum + 1 + strlen(str) > 80)  // 1����'\0'? 
//        {  
//            cout << endl;                 
//            sum = 0;          
//        }   
//        else if(i>0)  
//        {  
//            cout << " ";  
//            sum++;    
//        }  
//        cout << str;  
//        sum += strlen(str);  
//    }  
//    return 0;  
//}  


int main()
{
	int n, len, end;
	char word[MAX+1];
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf("%s", &word);
		len = strlen(word);
		if (len+1+end > LINE)
		{
			printf("\n");
			end = 0;
		}
		else if (i > 0)
		{
			printf(" ");
			end++;
		}
		printf("%s", word);
		end += len;
	}
	
	return 0;
}

