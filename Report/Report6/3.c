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

	
	
	printf("���� Ű�� ���� Ƚ�� : %d", cnt);

	return 0;
}