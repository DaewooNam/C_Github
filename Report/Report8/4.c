#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct node
{
	char name[30];
	int donation;

	struct node *next;


}Node;



int main(void)
{
	/*
	Node *head;
	Node *cur;
	Node *tail;
	*/

	int donation = 0;
	char name[30]= "";

	

	while(1)
	{
		printf("�̸� : ");
		scanf("%s", name);

		printf("%s", name);

		if (name == "end")
		{

			break;
		}
		/*
		printf("��α� : ");
		scanf("%d", &donation);
		*/
	}




	/*
	people->donation;

	
	printf("�̸�");
	scanf("%s",people.name);

	printf("��α�");
	scanf("%d", people.donation);
	*/



	return 0;
}