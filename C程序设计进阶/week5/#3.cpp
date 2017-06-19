#include <iostream>
#include <string.h> 
using namespace std;
#define MAX 40
#define LINE 80 
// 不会写。。。233333 逃) 
/*
1.n:英文短文中单词的数目，每个单词长度不超过40个字母
2.每行不超过80个字符
3.注意在windows下编程控制台默认为80字符宽度，到了80个字符会自动换行，
其他环境下不一定如此，所以不用作特殊处理
*/
//int main()  
//{  
//    int words = 0, sum = 0;  
//    cin >> words;  // 英文短文中单词的数目 
//    char str[41]={0};  // 每个单词长度不超过40个字母 
//    for (int i = 0; i < words; i++)  
//    {  
//        cin >> str;  
//        if (sum + 1 + strlen(str) > 80)  // 1代表'\0'? 
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

