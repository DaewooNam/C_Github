#include<stdio.h>

int main()
{

	int num = 0, i, odd = 0, even = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d",&num);



	

	for (i=0;i<=num;i++)
	{
		if (i % 2 == 0)
		{
			even = even + i;
		}
		else
		{ 
			odd = odd + i;

		}
	
		
		

	}

	
	printf("%d", even);
	printf("%d", odd);
	


}