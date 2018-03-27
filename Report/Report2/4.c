#include<stdio.h>

int main(void)
{
	int age = 25, chest = 95;

	

	if (age<20)
	{
		if (chest<85)
		{
			printf("사이즈는 S 입니다.");

		}
		else if (chest>= 80 && chest<95)
		{
			printf("사이즈는 M 입니다.");
		}
		else
		{
			printf("사이즈는 L 입니다.");
		}

	}

	else 
	{
		if (chest<90)
		{
			printf("사이즈는 S 입니다.");
		}
		else if (chest >= 90 && chest<100)
		{
			printf("사이즈는 M 입니다.");
		}
		else
		{
			printf("사이즈는 L 입니다.");
		}


	}

	

	return 0;

}