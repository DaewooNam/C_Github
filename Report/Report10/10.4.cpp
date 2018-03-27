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

	curr = head; // 현재 값은 head 주소 값을 나타냄
	

	for (int i = 0; i < 2; i++)
	{

	
	curr->next = tail; // 다음 값으로 변경 
	
	curr = tail; // 현재 값은 tail 주소를 나타냄
	
	tail = new Node();
	}


	return 0;
}