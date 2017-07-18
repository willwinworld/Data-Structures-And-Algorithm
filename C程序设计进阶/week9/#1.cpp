#include <iostream>
#include <sstream> 
#include <string>
#include <stdbool.h>
using namespace std;

bool check(int m, int k){
//	std::string s = std::to_string(m);  // ±àÒëÆ÷BUG
	 
	std::ostringstream s;
	s << m;
	const std::string tmp = s.str();
//	const char* cstr = tmp.c_str();
	bool condition1;
	bool condition2;
	
	if (m % 19 == 0){
		condition1 = true;
	}
	else{
		condition1 = false;
	}
	
//	int length = s.str().length();
	char *p = NULL;
	int count = 0;
//	for(p=cstr; *p != '\0'; p++){  // error: invalid conversion from 'const char*' to 'char*'
//		if (*p == '3'){
//			count++;
//		}
//	}
	for (const char& text : tmp){
		if (text == '3'){
			count++;
		}
	}
	if (count == k){
		condition2 = true;
	}
	else{
		condition2 = false;
	}
	
	if (condition1 && condition2 == true){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	bool res;
	int input_m, input_k;
	cin >> input_m >> input_k;
	res = check(input_m, input_k);
	if (res){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}
