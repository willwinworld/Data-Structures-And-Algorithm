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

int k = 0;  // ���ֵ���ĸ���� 
struct zimu{  // ���ڱ�����ֵ���ĸ������� 
	char letter;
	int  time;
};

zimu appearZimu[501];  // �������г��ֹ�����ĸ 
/*�����㷨������*/
int count(char input){  // ������ĸ�����д��� 
	bool find = false;
	for (int i = 0; i < k+1; i++){  // ���ֹ�����ĸ������+1 
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
	/*�����㷨������*/ 
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
