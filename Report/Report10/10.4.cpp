#include<iostream>
#include<cstdio>

typedef struct _node
{
	struct _node *next;
	int a;


}Node;


int main(void)
{
	Node *head = new Node();
	Node *curr = new Node();
	Node *tail;

	
	curr->a = 10;

	curr = head; // ���� ���� head �ּ� ���� ��Ÿ��
	

	for (int i = 0; i < 2; i++)
	{

	
	curr->next = tail; // ���� ������ ���� 
	
	curr = tail; // ���� ���� tail �ּҸ� ��Ÿ��
	
	tail = new Node();
	}


	return 0;
}