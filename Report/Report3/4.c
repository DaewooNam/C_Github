#include<stdio.h>

int main(void)
{
	int num=0, res= 0;




	while(1)
	{

		printf("양수 입력 : ", num);
		scanf_s("%d", &num);
		
		
		if (num>0)
		{
			res += num;
			

		}
		else
		{
			printf("누적된 값 : %d", res);
			
			break;
		}


		
	}


	return 0;
}