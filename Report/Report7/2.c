#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[19] = { 0, };
	char str2[19] = { 0, };
	char str3[19] = { 0, };
	char str4[19] = { 0, };
	char str5[19] = { 0, };

	char *strAry[5] = { str1,str2,str3,str4,str5 };

	int num = 0;
	int max = 0;
	int place = 0;
	int cnt = 0;
	int flag = 0;

	printf("5개의 과일 이름 입력 :");
	scanf("%s %s %s %s %s", str1, str2, str3, str4, str5);


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			num = strlen(strAry[i]);

			if (num > max)
			{
				max = num;
				place = i;
			}
			
			else if ((num == max) && (flag == 0) && (strlen(strAry[i]) == strlen(strAry[j]))) // 길이 비교 , 첫 번째 값을 비교해 주기 위해
			{

				place = i;
				flag = 1; // 위치를 고정 시켜주는 값

			}






		}


	}

	printf("길이가 가장 긴 과일 이름은 %s 입니다.", strAry[place]);

}