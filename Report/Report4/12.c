#include<stdio.h>


int main(void)
{
	int ary[6];
	int res;





	for (int i = 0; i < 6; i++)
	{


		printf("로또번호 입력 : ");
		scanf_s("%d", &ary[i]);

		res = ary[i];

		for (int j = 0; j < 6; j++)
		{
			if (ary[j] == res)
			{

				printf("같은 번호가 있습니다.!\n");

				ary[j] = NULL;
				break;

			}
		}

	





	}

	for (int i = 0; i < 6; i++)
	{

		printf("%d ", ary[i]);


	}




	/*
	for (int j = 0; j < 100; j++)
	{
		if (res[j] == ary[i])
		{

			printf("같은 번호가 있습니다.");

		}


	}
	*/


	return 0;
}