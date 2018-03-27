#include<stdio.h>

int main(void)
{


	char cha = '@';

	for (int i = 0;i<=5;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", cha);
		} 

		printf("\n");
	}



	return 0;
}
