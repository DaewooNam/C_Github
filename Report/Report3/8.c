#include<stdio.h>

int main(void)
{
	int answer = 0, num=0;


	printf("정답을 입력하시오 : ");

	scanf_s("%d", &answer);
	

	if ((1 < answer) && (answer < 30))
	{

		
		while (1)
		{


			printf("숫자 입력 (1부터 30까지): ");

			scanf_s("%d", &num);


			if (num < answer)
			{
				printf("%d보다 큽니다.\n", num);

			}


			else if (num > answer)
			{
				printf("%d보다 작습니다.\n", num);

			}


			else if(num == answer)
			{
				printf("정답입니다.\n");

				break;
			}
		}
	
	
	
	}
	else
	{
		printf("Error");
	}


	return 0;

}