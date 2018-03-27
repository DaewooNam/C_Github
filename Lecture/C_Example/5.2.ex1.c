#include<stdio.h>


int main()
{

	int factorial = 5, i = 1, result = 1;

	/*****************
	// while factorial
	while (i <= factorial)
	{


		result = result * i;

		i++;
		
		
	}
		
	printf("%d\n", result);
	*********************/

	
	for (i = 1; i <= factorial; i++)
	{

		result = result * i;
	}

	printf("%d", result);






	int num = 0;
	int value = 1;

	while (num!= 0)
	{

		value = value * num;
		num--;


	}
	

}