#include <iostream>
using namespace std;

/*
�����м�����
unit->next = temp;
follow->next = unit;
*/ 
struct student
{
	int id;
	student *next;
};

student *insert(student *head, int n)
{
	student *temp, *unit, *follow; // ����ڵ�Ϊn�Ľ��
	temp = head; unit = new student;  
	unit->num = n; unit->next = NULL; // initialize
	if (head==NULL){  // �������Ϊ�գ�ֱ�Ӳ��� 
		head = unit;
		return (head);
	}
	while((temp->next!=NULL)&&(temp->num<n)){  // Ѱ�ҵ�һ����С��n���β�Ľ��temp 
		follow=temp; temp=temp->next;
	}
	if (temp==head){  // ���tempΪ��һ����� 
		unit->next = head;
		head = unit;
	}
	else{  // ���tempΪ���һ����� 
		if(temp->next==NULL)
			temp->next = unit; // ���tempΪһ���м��� 
		else{
			follow->next = unit;  // ���tempΪһ���м��� 
			unit->next = temp;
		}
	}
	return (head);	
}
