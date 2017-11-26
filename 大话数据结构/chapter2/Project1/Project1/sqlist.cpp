#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"
/*
sqlist 顺序表
linklist 链表
struct Sqlist{
ElemType *elem;  //存储空间基址
int length;    // 当前长度
int listsize;  //当前分配的存储容量
};
逻辑关系上相邻的两个元素，物理地址上也相邻
*/
Status compare_equal_Sq(ElemType e1, ElemType e2) {
	if (e1 == e2)
		return TRUE;
	else
		return FALSE;
}


int LocateElem_Sq(struct Sqlist L, ElemType e, Status(*compare)(ElemType, ElemType)) {
	ElemType * p = L.elem;
	for (int i = 0; i < L.length; i++) {
		if (compare(e, *(p + i)))
			return i;
	}
	return 0;
}


int main() {

}