#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char* ch ;


	printf("%d", sizeof(ch));


	ch = (void *)malloc(sizeof(char)*5); // 주소값이 할당 되므로 배열로 풀어줄 필요가 없다
	
	printf("문자를 입력하세요 : ");
	scanf("%s",ch);
	

	/*
	for(int i =0 ; i<4; i++)
	{
		ch1 = getchar();


	}
	*/

	printf("동적 할당      : %s\n", ch);
	//free(ch);
	printf("동적 할당 제외 : %s", ch);








	return 0;
}