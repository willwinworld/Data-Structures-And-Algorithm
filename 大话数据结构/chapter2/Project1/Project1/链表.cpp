#include <stdio.h>
#include <stdlib.h>
#include "链表.h"
/*
链表：
如果p->data = a1
那么p->next->data = a2
初始条件：顺序线性表L已存在，1<=i<=ListLength(L)
操作结果：用e返回L中第i个数据元素的值
*/
Status GetElem(LinkList L, int i, ElemType *e) {
	int j = 1;
	LinkList head;  // 头结点,指向链表的第一个结点
	head->next = L;
	while (head && j < i) {
		head = head->next;
		++j;
	}
	if (!head || j > i) // 如果head为空，则取反，就为不空
		return ERROR;  // 第i个元素不存在
	*e = head->data;  // 取第i个元素的数据
	return OK;
}

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