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
	
	printf("1. ����4�ڸ�\n");
	printf("2. ��ȭ��ȣ\n");
	printf("���ϴ� ��й�ȣ �Է¹�� : ");
	scanf("%d",&select );

	num = select;



	switch (num)
	{
	case NUMBER:
	{
		printf("��й�ȣ �Է� : ");
		scanf("%d",&pw);
		printf("�Է��� ��й�ȣ �Է� : %d",pw);

		break;
	}
	case PHONE_NUMBER:
	{
		printf("��й�ȣ �Է� : ");
		scanf("%d", &pw);
		printf("�Է��� ��й�ȣ �Է� : %d", pw);

		break;
	}

	}


	return 0;
}