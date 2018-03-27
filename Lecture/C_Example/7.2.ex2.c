//selecting sort
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{

	int min = 100;
	int ads = 0;

	int arrayNum[5] = { 3,1,4,5,2 };
	int temp = 0;


	for (int j = 0; j < 5; j++)
	{
		min = 100;
		
		for (int i = 0; i < 5; i++)
		{
			if (min > arrayNum[i])
			{
				min = arrayNum[i];
				ads = i;

			}
		}

		temp = arrayNum[j];
		arrayNum[j] = arrayNum[ads];
		arrayNum[ads] = temp;

	}




	printf("%d", ads);


	// Min and Min adress searching





	return 0;
}