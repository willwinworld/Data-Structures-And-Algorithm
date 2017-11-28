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