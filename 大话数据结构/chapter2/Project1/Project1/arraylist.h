#pragma once
#define MAXSIZE 20 // 线性表的初始长度
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;  // ElemType 类型根据实际情况而定，这里假设为int
typedef int Status;
/*
Status是函数的类型，其值是函数结果状态代码，如OK等
初始条件：顺序线性表L已存在，1<=i<=ListLength(L)
操作结果：用e返回L中第i个数据元素
*/
typedef struct {
	ElemType data[MAXSIZE];  // 数组存储数据元素，最大值为MAXSIZE
	int length;  // 线性表当前长度
}Sqlist;

InitList(*L);  // 初始化操作，建立一个空的线性表
ListEmpty(L);  // 若线性表为空，返回true, 否则返回false
ClearList(*L); // 将线性表清空
GetElem(L, i, *e); // 将线性表L中的第i个位置元素赋给