#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;


string convert(){
	string str = "";
	getline(cin, str);
	
	for (int i = 0; str[i] != '\0'; i++){
		if (isalpha(str[i])){
			if (isupper(str[i])){
				str[i] = tolower(str[i]);
			}
		}
	}
	
	return str;
}

int main()
{
	string res = convert();
	cout << res;
//	for (int i = 0; str[i] != '\0'; i++){
//		cout << str[i];
//	}
    // ³É¹¦×ª»»
	
//	struct Statistics{
//		char character;
//		int count;
//	}; 
//    
//    int length = str.length()
//    Statistics statistics[length];
	
//	int length = str.length();
//	int res[length];
//    
//    for (int i = 0; str[i] != '\0'; i++){
//    	if (str[i] ) 
//    }
    
	return 0;
}
