#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int num = 0;

int main(void)
{
	char ch1[10] = "가위";
	char ch2[10] = "바위";
	char ch3[10] = "보";
	char *chAry[3] = { ch1,ch2,ch3 };

	int num = 0;

	while (num != -1)
	{
		printf("정수 입력 : ");
		scanf("%d", &num);


		if (num < 4)
		{
			num = num;
		}
		else
		{
			num = num % 3;
		}


		printf("%s\n", chAry[num-1]);
	}

	return 0;
}