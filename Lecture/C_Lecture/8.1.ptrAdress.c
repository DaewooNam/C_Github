//  ������ ���� �ּҰ� �� ���� �� Ȯ��

#include<stdio.h>

int main(void)
{
	
	int ary[5] = { 1,2,3,4,5 };

	/*
	printf("%u\n", ary); // �ּҰ� ���
	
	printf("%u\n", &ary[0]); // �ּҰ� ���
	printf("%u\n", &ary[1]); // �ּҰ� ���
	printf("%u\n", &ary[2]); // �ּҰ� ���
	printf("%u\n", &ary[3]); // �ּҰ� ���

	printf("%u\n", &ary[0]); // �ּҰ� ���
	printf("%u\n", ary+1); // �ּҰ� ���
	printf("%u\n", ary+2); // �ּҰ� ���
	printf("%u\n", ary+3); // �ּҰ� ���
	*/


	int* pa;
	int a = 100;

	pa = &a;

	printf("%u\n", pa);  // pa�� �Ҵ�� �ּҰ��� ǥ��
	printf("%d\n", *pa); // pa�ּҰ��� �Ҵ�� ���� ǥ��
	printf("%u\n", &a);  // a�� �ּҰ��� ǥ��
	printf("%d\n", a);   // a�� ������� ǥ��






	return 0;
}