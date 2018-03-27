#include<stdio.h>

int main()
{
	int num, i;

	int odd=0, even=0;
	
	printf(" 정수를 입력하세요");
	scanf_s("%d", &num);




	for (i = 1; i <= num; i++)
	{

		if (i % 2 == 0)
		{

			even = even + i;


			
		}


	}
	printf("짝수의 합 : %d\n", even);



	for (i = 1; i <= num; i++)
	{

		if (i % 2 != 0)
		{

			odd = odd + i;


		}



	}
	printf("홀수의 합: %d", odd);


	return 0;
	

}