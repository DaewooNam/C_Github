#include<stdio.h>

int main(void)
{
	int num=0, res= 0;




	while(1)
	{

		printf("��� �Է� : ", num);
		scanf_s("%d", &num);
		
		
		if (num>0)
		{
			res += num;
			

		}
		else
		{
			printf("������ �� : %d", res);
			
			break;
		}


		
	}


	return 0;
}