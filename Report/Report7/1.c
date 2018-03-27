#include<stdio.h>

int main(void)
{

	int mat[5][5] = { 0, };



	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 == 0)
			{
				mat[i][j] = (i * 5) + j + 1;

			}
			else
			{

				mat[i][j] = (i * 10) - j;

			}


		}



	}




	



	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			printf("%d\t", mat[i][j]);
		}

		printf("\n");
	}


	return 0;
}