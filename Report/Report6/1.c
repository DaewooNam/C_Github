#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	char str;

	printf("문자 입력 : ");
	scanf("%c", &str);

	printf("%c 문자의 아스키 코드값 %d", str, str);

	return 0;
}