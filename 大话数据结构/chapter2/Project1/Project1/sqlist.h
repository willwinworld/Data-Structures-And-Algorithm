#ifndef _Sqlist_H_
#define _Sqlist_H_

//����˳���ṹ������㷨��������

#define OK 1
#define OVERFLOW -1
#define LIST_INIT_SIZE 2  // ���Ա�洢�ռ��ʼ��������
#define LISTINCREMENT 10   //���Ա�洢�ռ��������
#define TRUE 1
#define FALSE 0
#define NOTEXIT 0
#define ERROR 0

typedef int Status;
typedef int ElemType;

struct Sqlist {
	ElemType *elem;  //�洢�ռ��ַ
	int length;    // ��ǰ����
	int listsize;  //��ǰ����Ĵ洢����
};

Status InitList_Sq(struct Sqlist &L);
void DestoryList_Sq(struct Sqlist &L);
void ClearList_Sq(struct Sqlist &L);
Status ListEmpyt_Sq(struct Sqlist L);
Status ListLength_Sq(struct Sqlist L);
void GetElem_Sq(struct Sqlist L, int i, ElemType &e);
Status compare_equal_Sq(ElemType e1, ElemType e2);
Status LocateElem_Sq(struct Sqlist L, ElemType e, Status(*compare)(ElemType, ElemType));
Status PriorElem_Sq(struct Sqlist L, ElemType cur_e, ElemType &pre_e);
Status NextrElem_Sq(struct Sqlist L, ElemType cur_e, ElemType &next_e);
void ListInsert_Sq(struct Sqlist &L, int i, ElemType e);
void ListDelete_Sq_Sq(struct Sqlist &L, int i, ElemType &e);
Status ListTraverse_Sq(struct Sqlist L, Status(*visit)(ElemType));
Status visit_display_Sq(ElemType e);

void unionList_Sq(struct Sqlist &La, struct Sqlist Lb);
void MergeList_Sq(struct Sqlist La, struct Sqlist Lb, struct Sqlist &Lc);

#endif
