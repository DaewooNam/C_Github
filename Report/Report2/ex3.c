#include<stdio.h>

int main()
{

	int num = 0, i, odd = 0, even = 0;

	printf("������ �Է��Ͻÿ�: ");
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