#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum choice { NUMBER=1, PHONE_NUMBER=2 };
typedef struct
{
	int num;
	char phone[20];

} Password;

int main(void)
{
	enum choice num;
	int select=0;
	int pw = 0;
	
	printf("1. 숫자4자리\n");
	printf("2. 전화번호\n");
	printf("원하는 비밀번호 입력방식 : ");
	scanf("%d",&select );

	num = select;



	switch (num)
	{
	case NUMBER:
	{
		printf("비밀번호 입력 : ");
		scanf("%d",&pw);
		printf("입력한 비밀번호 입력 : %d",pw);

		break;
	}
	case PHONE_NUMBER:
	{
		printf("비밀번호 입력 : ");
		scanf("%d", &pw);
		printf("입력한 비밀번호 입력 : %d", pw);

		break;
	}

	}


	return 0;
}