#include<stdio.h>

int main()
{
	int i, j;

	for (i = 2; i < 10; i++)
	{
		for(j=1; j<10; j++)
		{ 
		
			if ((i != j) && (i+j!=11))
			{
				printf("%d*%d= %d ", i, j, i * j);
			}
			else
				printf("   ");
		
		}
		printf("\n");

	}






}