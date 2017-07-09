#include <iostream>
using namespace std;

struct student
{
	int id;
	student *next;
};

student *create()
{
	student *head, *temp;
	int num, n = 0;
	head = new student;
	temp = head;
	cin >> num;
	while (num != -1)
	{
		n++;
		temp->id = num;
		temp->next = new student;
		temp = temp->next;
		cin >> num;
	}
	if(n==0)
		head = NULL;
	else
		temp->next = NULL;
	return head;
}

linker *dele(student *head, int n)
{
	// 在链表中将值为n的元素删掉 
	student *temp, *follow;
	temp = head;
	if (head==NULL){  // head为空，空表的情况 
		return (head);
	}
	if (head->num==n){  // 第一个节点是要删除的目标 
		head = head->next;
		delete temp;
		return (head);
	}
	while(temp != NULL && temp->num != n){  // 寻找要删除的目标 
		follow = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		cout << "not found";  // 没寻找到要删除的目标 
	else{
		follow->next = temp->next;  // 删除目标节点 
		delete temp;
	}
	return (head);
}

int main()
{
	student *pointer = create();
	while(pointer->next != NULL)
	{
		cout << pointer->id << endl;
		pointer = pointer->next;
	}
	
	/*链表结构--删除结点*/
	/*temp=head; head=head->next; delete temp; 删除头结点*/
	/*follow->next=temp->next; delete temp; 删除中间结点*/ 
	return 0;
}
