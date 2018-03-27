#include<stdio.h>

int main(void)
{

	char star = '*', space =' ';



	for (int i = 0; i<2; i++)
	{
		
		
		printf("%c", star);



		for (int j = 0; j<3; j++)
		{

			printf("%c", space);


		}
		

	}
	printf("\n");

	for (int i = 0; i<2; i++)
	{

		
		for (int j = 0; j<1; j++)
		{

			printf("%c", space);


		}
		printf("%c", star);

	}
	printf("\n");


	//


	for (int i = 0; i<1; i++)
	{

		for (int j = 0; j<2; j++)
		{

			printf("%c", space);


		}

		printf("%c", star);


	}
	printf("\n");

	
	for (int i = 0; i<2; i++)
	{


		for (int j = 0; j<1; j++)
		{

			printf("%c", space);


		}
		
		printf("%c", star);


	}
	printf("\n");

	for (int i = 0; i<2; i++)
	{


		printf("%c", star);



		for (int j = 0; j<3; j++)
		{

			printf("%c", space);


		}


	}
	printf("\n");


	
	

	
	return 0;


}