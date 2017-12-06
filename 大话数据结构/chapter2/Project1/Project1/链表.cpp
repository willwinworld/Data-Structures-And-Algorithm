#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "����.h"
/*
����
���p->data = a1
��ôp->next->data = a2
��ʼ������˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)
�����������e����L�е�i������Ԫ�ص�ֵ
*/


/*
��ʼ������˳�����Ա�L�Ѵ��ڣ�i<=i<=ListLength(L),
�����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1
*/
Status ListInsert(LinkList *L, int i, ElemType e) {
	int j = 1;
	LinkList p, s;
	p = *L;  // ������ֱ�Ӹ�����p,��ô����p��������L��
	while (p && j < i) {  // �˳�ѭ������������pΪ�ǿյ�ǰ���£�j == i���˳�ѭ���ˣ�˵���ҵ��˽��
		p = p->next;  // �����pΪ�����,�ͺý����ˣ����ϵı������
		j++;
	}
	if (!p || j > i) {
		return ERROR;
	}
	s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

/*
��ʼ����:˳�����Ա�L�Ѵ��ڣ�1<=i<=ListLength(L)
���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1
*/
Status ListDelete(LinkList *L, int i, ElemType *e) {
	int j = 1;
	LinkList p, q;
	p = *L;
	while (p && j < i) {
		p = p->next;
		++j;
	}
	if (!p || j > i) {
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
	return OK;
}


void CreateListHead(LinkList *L, int n) {
	LinkList p;
	srand(time(0));  /*��ʼ�����������,The C library function void srand(unsigned int seed) seeds the random number generator used by the function rand.*/
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;  /*�Ƚ���һ����ͷ���ĵ�������L��ͷ����ָ��ָ��NULL*/
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node)); /*�����½��*/
		p->data = rand() % 100 + 1;  /*�������100���ڵ�����*/
		p->next = (*L)->next;  
		(*L)->next = p;  /*���뵽��ͷ*/
	}
}


void CreateListTail(LinkList *L, int n) {
	LinkList p, r;
	srand(time(0)); 
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;  // rΪָ��β���Ľ��
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));  // �����½ڵ�
		p->data = rand() % 100 + 1;
		r->next = p;  // ����β�ն˽���ָ��ָ���½��
		r = p;  // ����ǰ���½ڵ㶨��Ϊ��β���ն˽��
	}
	r->next = NULL;  // ��ʾ��ǰ�������
}


Status ClearList(LinkList *L) {
	LinkList p, q;
	p = (*L)->next;  // pָ���һ�����
	while (p) {
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL; // ͷ���ָ����Ϊ��
	return OK;
}


int main() {
	//srand(time(0));
	//std::cout << rand() << endl;
	LinkList *L = NULL;
	//std::cout << *L << std::endl;
	std::cout << (*L)->data << std::endl;
	getchar();
	return 0;
}