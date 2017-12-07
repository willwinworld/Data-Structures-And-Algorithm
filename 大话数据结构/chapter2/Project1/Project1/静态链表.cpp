#include <stdio.h>
#include <stdlib.h>
#include "��̬����.h"


Status InitList(StaticLinkList space) {
	int i;
	for (i = 0; i < MAXSIZE - 1; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
	return OK;
}

/*�����ÿռ�����ǿգ��򷵻ط���Ľڵ��±꣬ ���򷵻�0*/
int Malloc_SLL(StaticLinkList space) {
	int i = space[0].cur;   
	if (space[0].cur)
		space[0].cur = space[i].cur;
	return i;
}

int ListLength(StaticLinkList L) {
	int j;
	int i = L[MAXSIZE - 1].cur;
	while (i) {
		i = L[i].cur;
		j++;
	}
	return j;
}


/*��L�е�i��Ԫ��֮ǰ�����µ�����Ԫ��e*/
Status ListInsert(StaticLinkList L, int i, ElemType e) {
	int j, k, l;
	k = MAXSIZE - 1;
	if (i < 1 || i > ListLength(L) + 1)
		return ERROR;
	j = Malloc_SLL(L);
	if (j) {
		L[j].data = e;
		for (l = 1; l <= i - 1; l++)
			k = L[k].cur;
		
	}
}