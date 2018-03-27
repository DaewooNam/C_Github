#include<stdio.h>

int main(void)
{
	int A[3] = { 1,2,3 };
	int B[10];


	for (int i = 0;i<10;i++)
	{
		for (int j = 0; j <3; j++)
		{
			

			if ((i - j == 0) || (i - j == 3) || (i - j == 6) || (i - j == 9))
			{
				B[i] = A[j];
				break;
			}
		
		}
		
		

	}

	for (int i = 0;i<10;i++)
	{
		printf("%d ", B[i]);


	}

	return 0;
}