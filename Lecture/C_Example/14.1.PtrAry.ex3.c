#include<stdio.h> //�Ǻ���ġ ���� ���� �ٷ� ����
int pib(int num); //�Ǻ���ġ���� p[i] = p[i-2] + p[i-1]


int main(void)
{
	int* pary[5];
	int temp_ary[100];




	//pib �ּҰ� �˱� ���� ����(5 * 5 mat)
		for (int i = 0; i < 25; i++)
		{
			temp_ary[i] = pib(i);

		}
		
	// pary ���� pib �ּҰ� ����  

	
	for(int i=0;i<5;i++)
	{
		pary[i] = &temp_ary[i*5];

	}

	// ���
	for (int i =0;i<5;i++)
	{

		for (int j=0;j<5;j++)
		{
			printf("%d\t", pary[i][j]);
		}
		printf("\n");


	}
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


