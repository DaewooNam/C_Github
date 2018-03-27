#include<stdio.h>
int pib(int num); //피보나치수열 p[i] = p[i-2] + p[i-1]

int main(void)
{
	int mat[5][5] = {0,}; // {0,} 초기화시 ',' 값 중요!!
	int res = 0;
	int k = 0;
	
	// pib 값 대입
	for (int i =0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			mat[i][j] = pib(k);
			
			k++;
		}


	}
	

	// 출력
	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j<5; j++)
		{
			printf("%d\t", mat[i][j]);
			
		
		}

		printf("\n");


	}

	


	return 0;
}






int pib(int num )
{
	int p[25] = { 0 };

	p[0] = 0;
	p[1] = 1;


	
	for (int i=2;i<=num;i++)
	{

		 p[i] = p[i - 2] + p[i - 1];

	}
	
	return p[num];



}