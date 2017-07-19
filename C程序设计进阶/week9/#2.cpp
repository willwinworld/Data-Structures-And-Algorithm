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

int k = 0;  // 出现的字母个数 
struct zimu{  // 用于保存出现的字母及其个数 
	char letter;
	int  time;
};

zimu appearZimu[501];  // 保存所有出现过的字母 
/*核心算法！！！*/
int count(char input){  // 对于字母，进行处理 
	bool find = false;
	for (int i = 0; i < k+1; i++){  // 出现过的字母，个数+1 
		if (input == appearZimu[i].letter){
			find = true;
			appearZimu[i].time++;
			break;
		}
	}
	if (find == false){
		appearZimu[k].letter = input;
		appearZimu[k].time = 1;
		k++;
	}
	
	return 0;
}

int main()
{
	string after_convert = convert();
	for (int i=0; after_convert[i] != '\0'; i++){
		count(after_convert[i]);
	}
	
	zimu larggest = {' ', 0};
	zimu second = {' ', 0};
	/*核心算法！！！*/ 
	for (int i = 0; i < k + 1; i++){
		if (appearZimu[i].time > larggest.time){
			second = larggest;
			larggest = appearZimu[i];
		}
		else if (appearZimu[i].time < larggest.time && appearZimu[i].time > second.time){
			second = appearZimu[i];
		}
	}
	
	cout << second.time;
	return 0;
}
