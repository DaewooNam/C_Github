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



	// 행렬 초기화 하는 방법(열은 빈공간으로 두지 않는다.)

	int score2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int score3[3][4] = { {1}, {5,6}, {9,10,11,12} };
	int score4[ ][4] = { { 1 },{ 5,6 },{ 9,10,11} };
	int score5[3][4] = { 1,2,3,4,5,6 };
	int score6[ ][4] = { 1,2,3,4,5,6 };
	*/

	// 문자열 주소값 
	char animal[5][20];
	/*
	for (int i=0;i<5;i++)
	{
		scanf("%s",&animal[i][0]); //위 두값은 같다
		scanf("%s",animal[i]);     //위 값은 문자열 주소값을 나타낸다. 

	}
	*/

	
	char animal[2][5] = { {'c','a','t','\0'} }; // 안좋은 예시


	char animal2[5][20] = { "cat","horse","dog", };

	for (int i =0;i<5;i++)
	{


		printf("%d행 =%s\n", i + 1, animal[i]);

	}


}