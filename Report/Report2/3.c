#include<stdio.h>


int main()
{

	int sum = 259;
	int avg= sum/3;

	printf("��� : %d", avg);

	if (avg >= 90)
	{
		printf("���� : A");
	}
	else if (80 <= avg && avg < 90)
	{
		printf("���� : B");
	}
	else if (70 <= avg && avg < 80)
	{
		printf("���� : C");
	}
	else
	{
		printf("���� : F");
	}
}