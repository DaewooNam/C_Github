#include<stdio.h>


int main (void)
{
	int num;

	
	printf("2이상의 정수를 입력하시오 : ");
	scanf_s("%d",num );



	if (num > 2)
	{

		for(int i=0; i<=num;i++)
		{

		for (int i=0;i<=num;i++)
		{
			if (num%i == 0)
			{
				if (num = i)
				{

					printf("%d", num);

				}
				else
				{

					break;

				}


			}




		}
		}
		
	
	}

	else
	{

		printf("Error");

	}
	return 0;
}