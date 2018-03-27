#include<stdio.h>


int main(void)
{
	int year=0;


	printf("년도를 입력하시오:");
	scanf_s("%d", &year);

	

	if (year % 4 == 0)
	{
		printf("윤년");
	}
	else
	{
		printf("평년");
	}



	

	return 0;
}