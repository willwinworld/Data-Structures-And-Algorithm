#include <iostream>
#include <stdio.h> 
using namespace std;
/*
�����д��������һ�����ã��������ʼ��Ϊ����ĳ��������
������ & ������ = ĳ������;
int n = 4;
int & r = n;  // r������n, r��������int &
ĳ�����������ã��ȼ�������������൱�ڸñ�����һ�������� 

��������ʱһ��Ҫ�����ʼ��������ĳ��������
��ʼ��������һֱ���øñ��������������ñ�ı����ˡ�

����ֻ�����ñ������������ó����ͱ��ʽ�� 
*/

/* 
//c���Ե�д��:

void swap(int *a, int *b){
	int temp;
	tmp = *a; *a = *b; *b = temp;
}

int n1, n2;
swap(&n1, &n2); // n1, n2��ֵ������ 

//����c++������:
void swap(int &a, int &b){
	int tmp;
	tmp = a; a = b; b = tmp;
}
int n1, n2;
swap(n1, n2);  // n1, n2��ֵ������

//������Ϊ�����ķ���ֵ
int n = 4;
int & SetValue(){
	return n;
}

int main(){
	SetValue() = 40;
	cout << n;
	return 0;
}


//������
��������ʱ��ǰ���const�ؼ��֣���Ϊ"������"
int n;
const int & r = n;
r��������const int &

����ͨ��������ȥ�޸������õ�����
int n = 100;
const int &r = n;
r = 200; // �����
n = 300; // û����

�����úͷǳ����õ�ת��
const T &��T & �ǲ�ͬ������!!!(��const int & �� int &�ǲ�ͬ����) 

T & ���͵����û�T���͵ı�������������ʼ��const T &���͵����á�
 
const T���͵ĳ�������const T &���͵���������������ʼ��T &���͵����ã�
���ǽ���ǿ������ת����

�������Ƭ���ĸ�û�� 
int n = 4;
int & r = n * 5;  // int��ת��int & r ���� 

int n = 6;
const int & r = n;  
r = 7; // const int &��ת��int�� ���� 

int n = 8;
int & r1 = n;
const int r2 = r1;  //  int & r1��ת��const int r2 
*/
 
int main()
{
	int n = 7;
	int & r = n;  // r������n,r��n�ȼ��� 
	r = 4;
	cout << r; //���4
	cout << n; //���4
	n = 5;
	cout << r; //���5 
	
	double a = 4, b = 5;
	double & r1 = a;
	double & r2 = r1;  // r2Ҳ����a
	r2 = 10;
	cout << a << endl;
	r1 = b;  // r1����b,������r1������b��������b��r1���и�ֵ��Ҳ����˵r1�Լ�r1���õĶ�������b����ˣ�r1������a 
	cout << a << endl; 
}
