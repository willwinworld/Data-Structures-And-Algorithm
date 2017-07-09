#include <iostream>
using namespace std;

/*
˫������
temp->num: �������
temp->next: ָ����һ��
temp->ahead: ָ��ǰһ�� 

temp->ahead->next = temp->next;
temp->next->ahead = temp->ahead;

unit->next = temp->next;
unit->head = temp; 
temp->next->ahead = unit;
temp->next = unit;

Լɪ������
���Ϊ1-N��N����Χ����һ���γ�һ��ԲȦ��
�ӵ�P���˿�ʼ�����ΰ���˳ʱ��ķ�������
������M���˳��У�ֱ�����ʣ��һ���ˡ� 
*/ 
struct Node
{
	int num;
	Node *ahead;
	Node *next;
};

Node *Create(int N);
Node *Search(Node *head, int P);
Node *Release(Node *head, int M);

int main()
{
	int N, P, M = 0;   //N-��ʼ�ڵ�����P-��ʼ�ڵ�
	cin >> N >> P >> M; // ÿ���ͷŵ�M���ڵ�
	Node *head = Create(N);  // ����N���ڵ�Ļ�
	head = Search(head, P);  // �ҵ���P���ڵ�
	while (head->next != head)  // �����ͷŵ�M��Ԫ�أ�ֱ��ֻʣ��һ��Ԫ�� 
	{
		head = Release(head, M);  // �ͷŵ�M���ڵ� 
	}
	cout << head->num;
	return 0; 
}

Node *Create(int N)  // ��������N���ڵ��˫��ѭ������ 
{
	int n = 1;
	Node *node = new Node;
	node->num = n;
	Node *head = node;  // ָ���һ���ڵ�
	Node *tail = head;  // ָ�����һ���ڵ�
	while (n++ < N)
	{
		node = new Node;  // ���½ڵ�
		node->num = n;  // ��ֵ
		tail->next = node; // �����½ڵ�
		node->ahead = tail;
		tail = tail->next;  // β�ͺ��� 
	} 
	tail->next = head;  // β�ʹ���
	head->ahead = tail;
	return head; 
} 

Node *Search(Node *head, int P)  // ��Head��ʼѰ�ҵ�P���ڵ�
{
	while(head->num != P)
	{
		head = head->next;
	}
	return head;
}

Node *Release(Node *head, int M)  // �ͷ�Head��ʼ�ĵ�M���ڵ�
{
	int count = 1;
	Node *temp = head;
	while (count < M)  // Ѱ�ҵ�M���ڵ� 
	{
		temp = temp->next;
		count++;
	}
	temp->ahead->next = temp->next;  // �Ƴ���M���ڵ�
	temp->next->ahead = temp->ahead;  // �Ƴ���M���ڵ�
	cout << temp->num << "," ,
	head = temp->next;  // �ͷŵ�M���ڵ���ռ�ڴ�ռ�
	delete temp;
	return head; 
} 

//����11 3 7
//���9 5 2 11 10 1 4 8 3 6 7 
