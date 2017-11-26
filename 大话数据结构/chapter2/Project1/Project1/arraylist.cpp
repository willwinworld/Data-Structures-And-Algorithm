#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"

/*
数组的长度：存放线性表的存储空间的长度，存储分配后这个量一般是不变的
线性表的长度：线性表的长度是线性表中数据元素的个数，随着线性表插入和删除操作的进行，这个量是变化的
在任意时刻，线性表的长度应该小于等于数组的长度
*/
Status GetElem(Sqlist L, int i, ElemType *e) {
	if (L.length == 0 || i < 1 || i > L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

/*
初始条件：顺序线性表L已存在，1<=i<=ListLength(L),
操作结果：在L中的第i个位置之前插入新的数据元素e,L的长度加1
*/
Status ListInsert(Sqlist *L, int i, ElemType e) {
	if (L->length == MAXSIZE) /*顺序线性表已经满*/
		return ERROR;
	if (i < 1 || i > L->length + 1)  /*当i不在范围内时*/
		return ERROR;
	if (i <= L->length) {  /*若插入数据位置不在表尾*/
		for (int k = L->length - 1; k >= i - 1; k--)
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

/*
初始条件：顺序线性表L已存在，1<=i<=ListLength(L)
操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1
*/
Status ListDelete(Sqlist *L, int i, ElemType *e) {
	if (L->length == 0) /*线性表为空*/
		return ERROR;
	if (i < 1 || i > L->length) /*删除位置不正确*/
		return ERROR;
	*e = L->data[i - 1];  /*取出元素*/
	if (i < L->length) {  /*如果删除不是最后位置*/
		for (int k = i; i <= L->length; k++)  /*将删除位置前移*/
			L->data[k - 1] = L->data[k];
	}
	L->length--;
	return OK;
}