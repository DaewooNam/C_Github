#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int *ptemper1;
	int *ptemper2;

	ptemper1 = (int*)malloc(sizeof(int) * 1);
	ptemper2 = (int*)malloc(sizeof(int) * 1);
	
	*ptemper1 = 30;
	*ptemper2 = 21;


	
	printf("�ְ��°� ��������� �Է��ϼ��� : %d %d\n",*ptemper1,*ptemper2);
	printf("�ϱ����� %d�� �Դϴ�.", *ptemper1- *ptemper2);

	free(ptemper1);
	free(ptemper2);

	return 0;
}