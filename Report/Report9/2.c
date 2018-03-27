#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(void)
{


	char ch[100]="a";

	FILE *pf = fopen("2.txt","r");
	
	if (pf == NULL) //예외 처리
	{
		printf("파일을 읽을 수가 없습니다.\n");
		return 0;

	}

	
	
	
	for (int i = 0; i < 100; i++)
	{
		fscanf(pf, "%c", &ch[i]);

	}
	
	


	for (int i = 0; i < 100; i++)
	{
		printf("%c", ch[i]);
		//printf("%d", ch[i]);


		if ((i%25==0)&&(i>25)||(ch[i]=='.')) //25자 이상 . 있을시 다음칸으로 넘어감
		{

			printf("\n");
			//i++;
		}


	}


	return 0;
}