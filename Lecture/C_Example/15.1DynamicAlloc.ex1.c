#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char* ch ;


	printf("%d", sizeof(ch));


	ch = (void *)malloc(sizeof(char)*5); // �ּҰ��� �Ҵ� �ǹǷ� �迭�� Ǯ���� �ʿ䰡 ����
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%s",ch);
	

	/*
	for(int i =0 ; i<4; i++)
	{
		ch1 = getchar();


	}
	*/

	printf("���� �Ҵ�      : %s\n", ch);
	//free(ch);
	printf("���� �Ҵ� ���� : %s", ch);








	return 0;
}