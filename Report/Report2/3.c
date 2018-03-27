#include<stdio.h>


int main()
{

	int sum = 259;
	int avg= sum/3;

	printf("평균 : %d", avg);

	if (avg >= 90)
	{
		printf("학점 : A");
	}
	else if (80 <= avg && avg < 90)
	{
		printf("학점 : B");
	}
	else if (70 <= avg && avg < 80)
	{
		printf("학점 : C");
	}
	else
	{
		printf("학점 : F");
	}
}