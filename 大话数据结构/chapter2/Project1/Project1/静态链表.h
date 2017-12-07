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
	int cur;  // 游标(Cursor), 为0时表示无指向
} Component, StaticLinkList[MAXSIZE];
