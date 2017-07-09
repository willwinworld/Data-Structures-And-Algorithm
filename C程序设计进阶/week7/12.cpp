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
	// �������н�ֵΪn��Ԫ��ɾ�� 
	student *temp, *follow;
	temp = head;
	if (head==NULL){  // headΪ�գ��ձ����� 
		return (head);
	}
	if (head->num==n){  // ��һ���ڵ���Ҫɾ����Ŀ�� 
		head = head->next;
		delete temp;
		return (head);
	}
	while(temp != NULL && temp->num != n){  // Ѱ��Ҫɾ����Ŀ�� 
		follow = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		cout << "not found";  // ûѰ�ҵ�Ҫɾ����Ŀ�� 
	else{
		follow->next = temp->next;  // ɾ��Ŀ��ڵ� 
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
	
	/*����ṹ--ɾ�����*/
	/*temp=head; head=head->next; delete temp; ɾ��ͷ���*/
	/*follow->next=temp->next; delete temp; ɾ���м���*/ 
	return 0;
}
