#include<stdio.h>


int main(void)
{
	int ary[5] = {10,20,30,40,50};

	printf("%d\n", ary); //ary �ּҰ�
	printf("%d\n", &ary[0]); //ary �ּҰ�
	printf("%d\n", *ary); //10
	printf("%d\n", ary[0]); //10

	printf("**********************************************************************\n");

	printf("%d\n", *(ary+1)); //
	printf("%d\n", ary[1]); //
	printf("%d\n", *(ary + 2)); //
	printf("%d\n", ary[2]); //

	printf("*********************************************************************\n");

	int *pary = ary;

	printf("Address %10u %10u %10u %10u %10u \n", pary,pary+1, pary + 2, pary + 3, pary + 4);
	printf("Value   %10d %10d %10d %10d %10d \n", *pary, *(pary + 1), *(pary + 2), *(pary + 3), *(pary + 4));
	printf("Value   %10d %10d %10d %10d %10d \n", pary[0], pary[1], pary[2], pary[3], pary[4]);
	printf("Value   %10d %10d %10d %10d %10d \n", ary[0], ary[1], ary[2], ary[3], ary[4]);

	// �Լ����� �ѱ涧 �ּҿ� �迭�� ������ ���� �ѱ�  �׷��� ������ sizeof �Լ��� ���� ����� �迭�� ������ Ȯ���� �� �� ����
	printf("*********************************************************************\n");
	printf("%d\n%d\n%d\n", sizeof(pary),sizeof(ary),sizeof(ary[0]));

	return 0;
}