#include <stdio.h>
#include <stdlib.h>
#include "����.h"
/*
����
���p->data = a1
��ôp->next->data = a2
��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)
�����������e����L�е�i������Ԫ�ص�ֵ
*/
Status GetElem(LinkList L, int i, ElemType *e) {
	int j = 1;
	LinkList head;  // ͷ���,ָ������ĵ�һ�����
	head->next = L;
	while (head && j < i) {
		head = head->next;
		++j;
	}
	if (!head || j > i) // ���headΪ�գ���ȡ������Ϊ����
		return ERROR;  // ��i��Ԫ�ز�����
	*e = head->data;  // ȡ��i��Ԫ�ص�����
	return OK;
}