// ������ ������ �迭ó�� ��� ������


#include<stdio.h>

int main()
{

	int ary[3];

	int *pa = ary;


	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];


	return 0;


	// �̶� &pa=100

	for (int i =0;i<3;i++)
	{
		printf("%5d\t", *(pa + i));

	}

	// �̶� &pa=100

	printf("\n");

	for (int i=0;i<3;i++)
	{

		printf("%5d\t", pa[i]);
	}

	// �̶� &pa=108 (pa���� ��ȯ )
	
	for (int i = 0; i<3; i++)
	{

		printf("%5d\t", *pa);
		pa++;
	}


}

