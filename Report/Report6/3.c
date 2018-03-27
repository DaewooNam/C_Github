#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




int main(void)
{
	int cnt = 0;
	char ch = 0;
	


	while (1)
	{


		ch = getchar();

		if (ch == '\n')
		{
			cnt++;
		}
			
		if (ch == EOF)
		{
			break;


		}
			


	}

	
	
	printf("엔터 키를 누른 횟수 : %d", cnt);

	return 0;
}