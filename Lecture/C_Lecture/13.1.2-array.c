#include<stdio.h>


int main(void)
{
	/*
	int score[3][4] = { {1,2,3,4,} ,{5,6,7,8,} ,{9,10,11,12} };

	
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<4;j++)
		{

			scanf_s("%d", &score[i][j]);

		}



	}

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<4; j++)
		{

			printf("%u  ", &score[i][j]);

		}

		printf("\n");

	}



	// ��� �ʱ�ȭ �ϴ� ���(���� ��������� ���� �ʴ´�.)

	int score2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int score3[3][4] = { {1}, {5,6}, {9,10,11,12} };
	int score4[ ][4] = { { 1 },{ 5,6 },{ 9,10,11} };
	int score5[3][4] = { 1,2,3,4,5,6 };
	int score6[ ][4] = { 1,2,3,4,5,6 };
	*/

	// ���ڿ� �ּҰ� 
	char animal[5][20];
	/*
	for (int i=0;i<5;i++)
	{
		scanf("%s",&animal[i][0]); //�� �ΰ��� ����
		scanf("%s",animal[i]);     //�� ���� ���ڿ� �ּҰ��� ��Ÿ����. 

	}
	*/

	
	char animal[2][5] = { {'c','a','t','\0'} }; // ������ ����


	char animal2[5][20] = { "cat","horse","dog", };

	for (int i =0;i<5;i++)
	{


		printf("%d�� =%s\n", i + 1, animal[i]);

	}


}