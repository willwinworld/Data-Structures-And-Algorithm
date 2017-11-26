#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"

/*
����ĳ��ȣ�������Ա�Ĵ洢�ռ�ĳ��ȣ��洢����������һ���ǲ����
���Ա�ĳ��ȣ����Ա�ĳ��������Ա�������Ԫ�صĸ������������Ա�����ɾ�������Ľ��У�������Ǳ仯��
������ʱ�̣����Ա�ĳ���Ӧ��С�ڵ�������ĳ���
*/
Status GetElem(Sqlist L, int i, ElemType *e) {
	if (L.length == 0 || i < 1 || i > L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

/*
��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L),
�����������L�еĵ�i��λ��֮ǰ�����µ�����Ԫ��e,L�ĳ��ȼ�1
*/
Status ListInsert(Sqlist *L, int i, ElemType e) {
	if (L->length == MAXSIZE) /*˳�����Ա��Ѿ���*/
		return ERROR;
	if (i < 1 || i > L->length + 1)  /*��i���ڷ�Χ��ʱ*/
		return ERROR;
	if (i <= L->length) {  /*����������λ�ò��ڱ�β*/
		for (int k = L->length - 1; k >= i - 1; k--)
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

/*
��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)
���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1
*/
Status ListDelete(Sqlist *L, int i, ElemType *e) {
	if (L->length == 0) /*���Ա�Ϊ��*/
		return ERROR;
	if (i < 1 || i > L->length) /*ɾ��λ�ò���ȷ*/
		return ERROR;
	*e = L->data[i - 1];  /*ȡ��Ԫ��*/
	if (i < L->length) {  /*���ɾ���������λ��*/
		for (int k = i; i <= L->length; k++)  /*��ɾ��λ��ǰ��*/
			L->data[k - 1] = L->data[k];
	}
	L->length--;
	return OK;
}