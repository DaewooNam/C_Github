#include<stdio.h>

int main()
{
	int num, i;

	int odd=0, even=0;
	
	printf(" ������ �Է��ϼ���");
	scanf_s("%d", &num);




	for (i = 1; i <= num; i++)
	{

		if (i % 2 == 0)
		{

			even = even + i;


			
		}


	}
	printf("¦���� �� : %d\n", even);



	for (i = 1; i <= num; i++)
	{

		if (i % 2 != 0)
		{

			odd = odd + i;


		}



	}
	printf("Ȧ���� ��: %d", odd);


	return 0;
	

}