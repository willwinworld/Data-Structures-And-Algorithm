#pragma once
#define MAXSIZE 20 // ���Ա�ĳ�ʼ����
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;  // ElemType ���͸���ʵ������������������Ϊint
typedef int Status;
/*
Status�Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��
��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)
�����������e����L�е�i������Ԫ��
*/
typedef struct {
	ElemType data[MAXSIZE];  // ����洢����Ԫ�أ����ֵΪMAXSIZE
	int length;  // ���Ա�ǰ����
}Sqlist;

