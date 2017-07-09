#include <iostream>
using namespace std;

/*
双向链表
temp->num: 存放数据
temp->next: 指向下一个
temp->ahead: 指向前一个 

temp->ahead->next = temp->next;
temp->next->ahead = temp->ahead;

unit->next = temp->next;
unit->head = temp; 
temp->next->ahead = unit;
temp->next = unit;

约瑟夫问题
编号为1-N的N个人围坐在一起形成一个圆圈，
从第P个人开始，依次按照顺时针的方向报数，
数到第M的人出列，直到最后剩下一个人。 
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
	int N, P, M = 0;   //N-起始节点数，P-开始节点
	cin >> N >> P >> M; // 每次释放第M个节点
	Node *head = Create(N);  // 创建N个节点的环
	head = Search(head, P);  // 找到第P个节点
	while (head->next != head)  // 不断释放第M个元素，直到只剩下一个元素 
	{
		head = Release(head, M);  // 释放第M个节点 
	}
	cout << head->num;
	return 0; 
}

Node *Create(int N)  // 创建包含N个节点的双向循环链表 
{
	int n = 1;
	Node *node = new Node;
	node->num = n;
	Node *head = node;  // 指向第一个节点
	Node *tail = head;  // 指向最后一个节点
	while (n++ < N)
	{
		node = new Node;  // 建新节点
		node->num = n;  // 赋值
		tail->next = node; // 接入新节点
		node->ahead = tail;
		tail = tail->next;  // 尾巴后移 
	} 
	tail->next = head;  // 尾巴处理
	head->ahead = tail;
	return head; 
} 

Node *Search(Node *head, int P)  // 从Head开始寻找第P个节点
{
	while(head->num != P)
	{
		head = head->next;
	}
	return head;
}

Node *Release(Node *head, int M)  // 释放Head开始的第M个节点
{
	int count = 1;
	Node *temp = head;
	while (count < M)  // 寻找第M个节点 
	{
		temp = temp->next;
		count++;
	}
	temp->ahead->next = temp->next;  // 移除第M个节点
	temp->next->ahead = temp->ahead;  // 移除第M个节点
	cout << temp->num << "," ,
	head = temp->next;  // 释放第M个节点所占内存空间
	delete temp;
	return head; 
} 

//输入11 3 7
//输出9 5 2 11 10 1 4 8 3 6 7 
