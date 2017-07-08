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

int main()
{
	student *head;
	head = new student;
	student *temp = head;
	
	temp->next = new student;
	temp = temp->next;
	
	return 0;
}
