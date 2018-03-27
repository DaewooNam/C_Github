#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main(void)
{
	char ch1[79], ch2[79];
	int i = 0;
	int len1 = 0, len2 = 0;
	int dic = -1;

	printf("두 단어 입력 : ");
	scanf("%s %s", ch1, ch2);


	// char 길이 비교
	printf("길이가 긴 단어 : ");
	len1 = strlen(ch1);
	len2 = strlen(ch2);



	if (len1 > len2)
	{
		printf("%s\n", ch1);

	}
	else
	{
		printf("%s\n", ch2);
	}

	// char 길이 비교
	printf("사전에 먼저 나오는 단어 : ");

	dic = strcmp(ch1, ch2);

	if (dic < 1)
	{
		printf("%s", ch1);
	}
	else if(dic >1)
	{
		printf("%s", ch2);
	}
	



	return 0;
}

