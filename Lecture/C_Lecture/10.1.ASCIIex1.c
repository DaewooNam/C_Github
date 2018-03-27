#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void big_to_small(char*charSt, int size);
void small_to_big(char*charSt, int size);

int main(void)
{
	char charSt[100];
	int size = sizeof(charSt)/sizeof(charSt[0]);

	printf("문자를 입력하시오:");
	scanf("%s", charSt);

	if (((charSt[0] >= 'A') && (charSt[0] <= 'Z')))
	{
		big_to_small(charSt, size);

	}
	else if (((charSt[0] >= 'a') && (charSt[0] <= 'z')))
	{

		small_to_big(charSt, size);

	}




	
	printf("%s", charSt);

	

}

void big_to_small(char*charSt, int size)
{

	for (int i = 0; i<size; i++)
	{
		
		if ((charSt[i] >= 'A') && (charSt[i] <= 'Z'))
		{

			charSt[i] += ('a' - 'A');

		}


	}


}

void small_to_big(char*charSt, int size)
{
	for (int i = 0; i<size; i++)
	{
		if ((charSt[i] >= 'a') && (charSt[i] <= 'z'))
		{

			charSt[i] -= ('a' - 'A');

		}


	}



}