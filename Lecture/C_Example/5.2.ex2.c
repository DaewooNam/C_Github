#include<stdio.h>


int main(void)
{
	int num = 0, num1 = 0, num2 = 0, i = 0, resPre = 0, resPost = 0, j = 0, res1 = 0, res2 = 0;
	int max = 0, min = 0, least = 0, largest = 1, a = 1, b = 1, god =0;


	/*
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	*/


	/*
	for (j=1;j<=num;j++)
	{


		for (i = 1; i <= num; i++)
		{

			resPost = 1;
			resPost = resPost + i;


		}


	resPre = resPost + resPre;
	}


	printf("%d\n", resPre);



	for (i=1;i<=num;i++)
	{
		if (num % i ==0)
		{

			res = i;

			printf("%d", res);

		}

	}
	*/

	printf("두 정수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{

		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;


	}




	for (i = 1; i <= max; i++)
	{

		if (num1 % i == 0)
		{

			res1 = i;

			printf("res1 = %d\n", res1);

		}


		if (num2 % i == 0)
		{

			res2 = i;

			printf("res2 = %d\n", res2);

		}

		if (res1 == res2) // 최대 공약수
		{
			largest = res1;
			

		}


		if ((num %i == 0) && (num2%i == 0))
		{
			god = i;

		}


	}



	

	for (j;(j>=max)&&(j>=1000);j--)
	{

		if ((j % num1 == 0) && (j % num2 == 0));
		{
			least = j;
		}

	}






	printf("최대공약수 : %d,최소공배수 : %d ", largest, least);





	
	


	return 0;
}