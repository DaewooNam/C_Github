#include<stdio.h>


int main(void)
{
	char str_name[100];
	char str_num[100];
	char str_adr[100];

	int size_name = sizeof(str_name)/sizeof((str_name[0]));
	int size_num  = sizeof(str_num) / sizeof((str_num[0]));
	int size_adr  = sizeof(str_adr) / sizeof((str_adr[0]));

	printf("�̸� : ");
	fgets(str_name, size_name, stdin);

	/*
	printf("��ȭ��ȣ : ");
	fgets(str_num, size_num, stdin);


	printf("�ּ� : ");
	fgets(str_adr, size_adr, stdin);
	*/


	//printf ��� �� ���� Q

	printf("%s", str_name );

	printf("********");
	


	return 0;
}