#include <iostream>
#include <stdio.h>
using namespace std;

// ����ָ��
// ������ (*ָ��������)(��������1�� ��������2...��;
// int (*pf)(int, char)
// ��ʾpf��һ������ָ�룬����ָ���ĺ���������ֵ����Ӧ��int,
// �ú���Ӧ��������������һ����int���ͣ��ڶ�����char���͡�

 
 void PrintMin(int a, int b){
	if(a<b)
		printf("%d", a);
	else
		printf("%d", b);
 }

 int main(){
 	void (*pf)(int, int);
 	int x = 4, y = 5;
 	pf = PrintMin;
 	pf(x, y);
 	return 0;
 }
