#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	char ch;
	



	FILE *frp1 = fopen("a.txt","r");
	FILE *frp2 = fopen("b.txt", "w");

	

	if ((frp1 == NULL)||(frp2 == NULL)) //예외 처리
	{
		printf("파일을 읽을 수가 없습니다.\n");
		return 0;

	}

	



	while (1)
	{
		ch = fgetc(frp1);
		fputc(ch, frp2);

		if (ch==EOF)
		{

			break;

		}

		
	}



	
	fclose(frp1);

	fclose(frp2);

	return 0;
}