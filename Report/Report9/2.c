#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(void)
{


	char ch[100]="a";

	FILE *pf = fopen("2.txt","r");
	
	if (pf == NULL) //���� ó��
	{
		printf("������ ���� ���� �����ϴ�.\n");
		return 0;

	}

	
	
	
	for (int i = 0; i < 100; i++)
	{
		fscanf(pf, "%c", &ch[i]);

	}
	
	


	for (int i = 0; i < 100; i++)
	{
		printf("%c", ch[i]);
		//printf("%d", ch[i]);


		if ((i%25==0)&&(i>25)||(ch[i]=='.')) //25�� �̻� . ������ ����ĭ���� �Ѿ
		{

			printf("\n");
			//i++;
		}


	}


	return 0;
}