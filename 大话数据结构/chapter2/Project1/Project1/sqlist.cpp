#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"
/*
sqlist ˳���
linklist ����
struct Sqlist{
ElemType *elem;  //�洢�ռ��ַ
int length;    // ��ǰ����
int listsize;  //��ǰ����Ĵ洢����
};
�߼���ϵ�����ڵ�����Ԫ�أ������ַ��Ҳ����
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