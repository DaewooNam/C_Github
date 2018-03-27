// 순서 배열(bubble?)

#include<stdio.h>

int main(void)
{

	int arrayNum[5] = { 1,4,3,5,2 };
	int temp = 0;


	
		for (int i = 0; i < 4; i++)
		{

			if (arrayNum[i] > arrayNum[i + 1])
			{
				temp = arrayNum[i];
				arrayNum[i] = arrayNum[i+1];
				arrayNum[i+1] = temp;
			}

		}
	


	for (int i =0;i<5;i++)
	{
		printf("%d", arrayNum[i]);


	}
	
	return 0;
}
