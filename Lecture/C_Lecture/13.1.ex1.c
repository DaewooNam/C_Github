#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int strlen(char* pa);

int main(void)
{

	char mat[3][10] = { 0 };
	int num = 0;
	int ary[3] = { 0 };
	int max = 0;
	int place = 0;





	// ��
	for (int i = 0; i < 3; i++)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%s", mat[i]);
		num = strlen(mat[i]);
		ary[i] = num;
	}


	// Max ��

	for (int i = 0; i < 3; i++)
	{
		if (ary[i] > max)
		{
			max = ary[i];
			place = i;

		}
	}
	

	//printf("max = %d", max);



	printf("���� �� ���� : %s", mat[place]);




	return 0;


}


int strlen(char* pa)
{
	int cnt = 0;

	while (*pa != '\0')
	{

		pa++;
		cnt++;


	}

	return cnt;

}