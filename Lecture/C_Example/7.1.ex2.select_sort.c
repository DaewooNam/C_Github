#include<stdio.h>



int main(void)
{
	int temp = 0, max = 0, min = 1000, place=0;

	int arrayNum[5] = { 2, 5, 4, 1, 3 };

	
	// 최솟값 찾기 and 주소 찾기(??)
	for (int i = 0; i < 4; i++)
	{
		min = 1000;

		for (int j = i;j<5;j++) //(int j = 0;j<i+1;j++)
		{
			if (min > arrayNum[j])
			{
				min = arrayNum[j];
				place = j;
			}




		}
		temp = arrayNum[place];
		arrayNum[place] = arrayNum[i];
		arrayNum[i] = temp;




		/*
		if (arrayNum[i] < arrayNum[i+1])
		{

			min = arrayNum[i];

		}
		else
		{
			min = arrayNum[i+1];


		}

		if (min < arrayNum[i + 2])
		{

			min = arrayNum[i + 2];
		}
		else
		{
			min = min;

		}

		flag 변화?

		*/

	}


	// 최솟값 배정 
	



	printf("%d", min);

}