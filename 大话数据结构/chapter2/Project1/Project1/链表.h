#ifndef _LINK_LIST_
#define _LINK_LIST_
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int Status;
/*���Ա�ĵ�����洢�ṹ*/
typedef struct Node {
	ElemType data;
	struct Node *next;
} Node;
typedef struct Node *LinkList;  // ����LinkList

#endif