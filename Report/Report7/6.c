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
	printf("�ټ� ���� ������ �Է��ϼ���:\n");

	for (int i = 0; i < 5; i++)
	{

		scanf("%s", pstAry[i]);

	}

	/*
	strcpy(pstAry[0], "�Ͼ�� �Ǿ ���� �� �ϳ��� \0");
	strcpy(pstAry[1], "�ް��� �ٶ��� ���� ���о� \n");
	strcpy(pstAry[2], "�ƹ� �� ���ߴ� �̸��� ������ \n");
	strcpy(pstAry[3], "������ ���鿡 ������ �귯 \n");
	strcpy(pstAry[4], "������ �ٶ��� ���� �ִ�. \n");

	*/



}
void print_str(char(*pstAry)[79])
{

	printf("\n\n�Էµ� ������...\n");
	for (int i = 0; i < 5; i++)
	{

		printf("%s\n", pstAry[i]);

	}

}