#include <iostream>
using namespace std;

/*
插在中间的情况
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
	student *temp, *unit, *follow; // 插入节点为n的结点
	temp = head; unit = new student;  
	unit->num = n; unit->next = NULL; // initialize
	if (head==NULL){  // 如果链表为空，直接插入 
		head = unit;
		return (head);
	}
	while((temp->next!=NULL)&&(temp->num<n)){  // 寻找第一个不小于n或结尾的结点temp 
		follow=temp; temp=temp->next;
	}
	if (temp==head){  // 如果temp为第一个结点 
		unit->next = head;
		head = unit;
	}
	else{  // 如果temp为最后一个结点 
		if(temp->next==NULL)
			temp->next = unit; // 如果temp为一个中间结点 
		else{
			follow->next = unit;  // 如果temp为一个中间结点 
			unit->next = temp;
		}
	}
	return (head);	
}
