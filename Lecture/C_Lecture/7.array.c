#include<stdio.h>

int main(void)
{

	int ary[5] = {1,2,3,4,5} ;
	int i;

	printf("%d", ary[0]);
	printf("%d", ary[1]);
	printf("%d", ary[2]);
	printf("%d", ary[3]);
	printf("%d", ary[4]);


	for (int i = 0; i < 5; i++)
	{

		printf("%d\n", ary[i]);

	}


	// 이렇게 실수 많이 하게 됨
	// ary[5] = { 6, 7,8,9,10 };

	/*
	while (i < 100)
	{


	}
	*/

	ary[0] = 6;
	ary[1] = 2;
	ary[2] = 10;



	return 0;
}