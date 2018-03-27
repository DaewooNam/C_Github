#include<stdio.h>

int main(void)
{

	int ary[10] = { 1,2 };
	
	for (int i=2;i<10;i++)
	{

		ary[i] = ary[i - 1] + ary[i - 2];

	}


	for (int i = 0; i < 10; i++)
	{


		printf("%d ", ary[i]);

	}
	return 0;

}