#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


void input_str(char(*pstAry)[79]);
void print_str(char(*pstAry)[79]);


int main(void)
{


	char stAry[5][79];



	input_str(stAry);
	print_str(stAry);



	

	return 0;
}


void input_str(char(*pstAry)[79])
{
	printf("다섯 개의 문장을 입력하세요:\n");

	for (int i = 0; i < 5; i++)
	{

		scanf("%s", pstAry[i]);

	}

	/*
	strcpy(pstAry[0], "하얗게 피어난 얼음 꽃 하나가 \0");
	strcpy(pstAry[1], "달가운 바람에 얼굴을 내밀어 \n");
	strcpy(pstAry[2], "아무 말 못했던 이름도 몰랐던 \n");
	strcpy(pstAry[3], "지나간 날들에 눈물이 흘러 \n");
	strcpy(pstAry[4], "차가운 바람에 수어 있다. \n");

	*/



}
void print_str(char(*pstAry)[79])
{

	printf("\n\n입력된 문장은...\n");
	for (int i = 0; i < 5; i++)
	{

		printf("%s\n", pstAry[i]);

	}

}