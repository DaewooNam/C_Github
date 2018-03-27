#include<stdio.h>


int main(void)
{

	int mat[4][4] = { { 10,20,30 }, {5,6,7}, {1,2,3} };
	int cnt = 0;






	// 행의 합

	for (int j = 0; j < 3; j++)
	{

		for (int i = 0; i < 3; i++)
		{
			mat[j][3] += mat[j][i];


		}

	}



	// 열의 합

	for (int j = 0; j < 3; j++)
	{

		for (int i = 0; i < 3; i++)
		{
			mat[3][j] += mat[i][j];


		}

	}





	//************
	// 평균값

	for (int i = 0; i < 3; i++)
	{


		for (int j = 0; j < 3; j++)
		{

			mat[3][3] += mat[i][j];
			cnt++;

		}
	}
	
	
	
	mat[3][3]=mat[3][3] / cnt;







	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			printf("%u  ", mat[i][j]);

		}

		printf("\n");

	}






	return 0;
}