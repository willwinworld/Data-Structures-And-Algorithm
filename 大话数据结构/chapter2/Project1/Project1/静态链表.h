#pragma once
#define MAXSIZE 1000
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int Status;
typedef struct {
	ElemType data;
	int cur;  // �α�(Cursor), Ϊ0ʱ��ʾ��ָ��
} Component, StaticLinkList[MAXSIZE];
