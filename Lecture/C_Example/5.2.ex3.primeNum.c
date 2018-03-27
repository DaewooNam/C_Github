#include<stdio.h>

int main()
{
	int num = 0, primeNum = 0, i = 0;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);


	for (i = 2; i <= num; i++)
	{
		if (num%i == 0)
		{
			if (num == i)
			{
				printf("소수 입니다");


			}
			else
			{

				printf("소수가 아닙니다.");

			}



			break;

		}
	}



	//for (int i = 2; i <= num; i++)
	//{
	//	if (num &i == 0)
	//	{
	//		(num == i) ? printf("소수입니다") : printf("소수가 아닙니다.");
	//		break;

	//	}
	//}

	//return 0;

}