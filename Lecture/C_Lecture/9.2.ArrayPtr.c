// 포인터 변수를 배열처럼 사용 가능함


#include<stdio.h>

int main()
{

	int ary[3];

	int *pa = ary;


	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];


	return 0;


	// 이때 &pa=100

	for (int i =0;i<3;i++)
	{
		printf("%5d\t", *(pa + i));

	}

	// 이때 &pa=100

	printf("\n");

	for (int i=0;i<3;i++)
	{

		printf("%5d\t", pa[i]);
	}

	// 이때 &pa=108 (pa값의 변환 )
	
	for (int i = 0; i<3; i++)
	{

		printf("%5d\t", *pa);
		pa++;
	}


}

