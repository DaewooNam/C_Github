#include<stdio.h>
int prime_check(int x);



int main(void)
{

	int n = 32767;
	int res = -1;

	res = prime_check(n);
	
	if (res == 1)
	{
		printf("�Ҽ��Դϴ�.");
	}
	
	else
	{
		printf("�Ҽ��� �ƴմϴ�.\n");

	}

	
	
	

	return 0;

}


int prime_check(int x)
{
	for (int i=2;i<x;i++)
	{
		if (x%i == 0)
		{
			if (x!=i)
			{

				return 0;
				break;
			}
			else
			{
				return 1;
			}
		}
		


	}
		

}