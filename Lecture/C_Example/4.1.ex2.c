#include<stdio.h>


int main()
{

	int value;
	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%d", &value);



	//if (value % 2 == 0)
	//{
	//	printf("¦��");
	//}

	//else
	//{
	//	printf("Ȧ��");
	//}


	
	value % 2 == 0 ? printf("¦��") : printf("Ȧ��");



}