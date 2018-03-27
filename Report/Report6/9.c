#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{

	char ch[15];

	printf("단어 입력 : ");
	scanf("%s",ch);
	
	
	printf("입력한 단어 : %s \n",ch);
	

	if (strlen(ch) >= 5)
	{
		printf("생략한 단어 : ");
		for (int i =0;i<5;i++)
		{
			
			printf("%c", ch[i]);
			

		}
		for(int i=5;i<strlen(ch);i++)
		printf("*");
	}
	else
	{
		printf("%s", ch);

	}


	return 0;
}