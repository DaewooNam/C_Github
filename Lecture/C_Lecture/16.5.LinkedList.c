#include<stdio.h>

typedef struct node
{
	int num;
	struct node *nextNodePtr;

}Node;


void print_Node(Node* nodePtr);
void attend_Node(Node* start,Node* addNode);


int main(void)
{
	Node a, b, c;
	Node d;
	a.num = 10;
	b.num = 20;
	c.num = 30;
	d.num = 40;


	a.nextNodePtr = &b;
	b.nextNodePtr = &c;
	c.nextNodePtr = NULL;
	
	attend_Node(&a, &d);

	return 0;

}

void print_Node(Node* nodePtr)
{

	Node * current = nodePtr;

	while (current != NULL)
	{
		printf("%d\n", current->num);
		current = current->nextNodePtr;

	}


	
}

void attend_Node(Node* start, Node* addNode)
{
	Node * current = start;


	while (current->nextNodePtr != NULL)
	{
		
		printf("%d\n", current->num);

		current = current->nextNodePtr;

		
	}


		current->nextNodePtr = addNode;


	
	printf("%d\n", current->num);

}