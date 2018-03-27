#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int charNum=0,cnt=0;
	char charName[20];


	printf("문자를 입력하시오 : ");
	scanf("%s", &charName);


	
	for (int i = 0;charName[i]!=NULL;i++)
	{
		cnt++;

	}

	printf("%d", cnt);


}