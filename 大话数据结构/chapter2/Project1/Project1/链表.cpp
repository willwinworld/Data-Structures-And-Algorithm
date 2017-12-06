#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "链表.h"
/*
链表：
如果p->data = a1
那么p->next->data = a2
初始条件：顺序线性表L已存在，1<=i<=ListLength(L)
操作结果：用e返回L中第i个数据元素的值
*/


/*
初始条件：顺序线性表L已存在，i<=i<=ListLength(L),
操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1
*/
Status ListInsert(LinkList *L, int i, ElemType e) {
	int j = 1;
	LinkList p, s;
	p = *L;  // 将链表直接赋给了p,那么现在p就是链表L了
	while (p && j < i) {  // 退出循环的条件，在p为非空的前提下，j == i就退出循环了，说明找到了结点
		p = p->next;  // 理解了p为链表后,就好解释了，不断的遍历结点
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
初始条件:顺序线性表L已存在，1<=i<=ListLength(L)
操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1
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
	srand(time(0));  /*初始化随机数种子,The C library function void srand(unsigned int seed) seeds the random number generator used by the function rand.*/
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;  /*先建立一个带头结点的单链表，让L的头结点的指针指向NULL*/
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node)); /*生成新结点*/
		p->data = rand() % 100 + 1;  /*随机生成100以内的数字*/
		p->next = (*L)->next;  
		(*L)->next = p;  /*插入到表头*/
	}
}


void CreateListTail(LinkList *L, int n) {
	LinkList p, r;
	srand(time(0)); 
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;  // r为指向尾部的结点
	for (int i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));  // 生成新节点
		p->data = rand() % 100 + 1;
		r->next = p;  // 将表尾终端结点的指针指向新结点
		r = p;  // 将当前的新节点定义为表尾的终端结点
	}
	r->next = NULL;  // 表示当前链表结束
}


Status ClearList(LinkList *L) {
	LinkList p, q;
	p = (*L)->next;  // p指向第一个结点
	while (p) {
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL; // 头结点指针域为空
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