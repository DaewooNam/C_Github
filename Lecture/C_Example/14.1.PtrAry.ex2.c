#include<stdio.h>
int pib(int num); //피보나치수열 p[i] = p[i-2] + p[i-1]


int main(void)
{
	int* pary[5];
	int temp_ary[100];
	int size = sizeof(pary) / sizeof(pary[0]);


	//printf("sisze  : %d", size);

	
	for (int i =0;i<size;i++)
	{



	}





	/*
	for (int i =0;i<10;i++)
	{
		for (int j = 0; j < 10;j++)

		{
			ary[i] = pib(1);


		}
		
	}
	*/



	return 0;
}



int pib(int num)
{
	int p[25] = { 0 };

	p[0] = 0;
	p[1] = 1;



	for (int i = 2; i <= num; i++)
	{

		p[i] = p[i - 2] + p[i - 1];

	}

	return p[num];



}
