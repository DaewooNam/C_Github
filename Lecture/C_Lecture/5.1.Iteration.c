#include<stdio.h>

int main(void)
{
	int i, j;

	for (i=1;i<10;i++) // 100�� �ݺ��ϰ� �ȴ�.
	{	

		

		for (j = 2; j < 10; j++)
		{
			if ((i != j) && (i + j != 11))
			{
				
				
					printf("%d * %d=%d ", j, i, j * i);
				
			}
			else 
			{
				printf("       ");

			}
			
			
			
		}

		printf("\n");
		

	}


	return 0;
}