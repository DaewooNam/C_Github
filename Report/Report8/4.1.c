#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{

	char ch[100];


	while (1)
	{

		printf("문자를 입력하세요 : ");
		
		scanf("%s", ch);

		//getchar();


		if (ch == "q")
		{

			break;
		}

	}
	


}