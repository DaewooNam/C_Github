#include<stdio.h>

int main(void)
{



	int arrayNum[5] = { 1,5,4,2,3 };
	int cnt = 0;
	int temp = 0;

	temp = arrayNum[1];
	arrayNum[1] = arrayNum[2];
	arrayNum[2] = temp;


	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arrayNum[i]);

	}

	/*
	printf("5개 정수를 입력 하시오 : ");
	scanf_s("%d", &arrayNum[5]);


	printf("%d",*arrayNum);
	*/



	for(int i=0;i<5;i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arrayNum[j] > arrayNum[j + 1])
			{
				temp = arrayNum[j];
				arrayNum[j] = arrayNum[j + 1];
				arrayNum[j + 1] = temp;
			}
			


		}
	}
	

	for (int i = 0; i < 5; i++)
	{
		printf("%d", arrayNum[i]);

	}
	





	/*

	while (1)
	{



	}
	*/

	return 0;
}