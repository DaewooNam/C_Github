#include<stdio.h>

int main(void)
{
	char space = ' ';


	for (int i = 1; i <= 9; i=i+2)
	{
		for (int j = 10; j >= i; j=j-2)
		{
			printf("%c", space);
			

		}

		for (int k = 1; k <= i; k++)
		{

			printf("%d", k);

		}

		printf("\n");
	}


	
	return 0;

}