#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void func(void);

int main(void)
{
	/*
	int* pi;
	double* pd;

	//void* malloc(size)
	pi = (int *)malloc(sizeof(int));

	if (pi=NULL) //�޸� ����
	{
	printf("�޸𸮰� �����մϴ�");// ����ó��
	exit(1);
	}

	pd = (double *)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.5;
	printf("%d %f", *pi, *pd);
	free(pi);
	free(pd);


	//printf("���� �Ҵ� Ȯ�� : %d %f", *pi, *pd);

	*/


	/*
	int ary[5];

	for (int i=0;i<5;i++)
	{
		scanf("%d",&ary[i]);

	}
	*/

	for(;;)
	{
		func();


	}

			


	return 0;

}




void func(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int) * 5);

	if (pi = NULL) //�޸� ����
	{
		printf("�޸𸮰� �����մϴ�");// ����ó��
		exit(1);
	}

	for (int i = 0; i < 5; i++)
	{
		//scanf("%d", &pi[i]); // pointer �迭 ���� �� ���� �ּҰ��� ����

	}

	free(pi);
	return ;


}