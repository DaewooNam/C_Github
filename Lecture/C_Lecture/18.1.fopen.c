#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int height;
	int weight;
	char ch;
	double bmi;
	char name[10];
	
	FILE *frp = fopen("foo.txt","r"); //r 읽기 w 쓰기 a 붙여쓰기
	
	if (frp ==NULL) //예외 처리
	{
		printf("파일을 읽을 수가 없습니다.\n");
		return 0;

	}

	FILE *fwp = fopen("foo2.txt", "w");
	
	if (fwp == NULL)
	{
		printf("파일을 읽을 수가 없습니다.\n");
		return 0;

	}

	while (1) //getchar() 값과 일치
	{

		ch = fgetc(frp);
		fputc(ch, fwp);

		if (ch==EOF)
		{
			break;

		}
		
		putchar(ch);

	}



	//                   Basic Method
	//*********************************************************
	/* 
	//scanf printf fscanf fpintf
	
	fscanf(frp,"%s %d %d ",&name,&height,&weight);
	
	bmi = (double)weight / (double)(height*0.01*height*0.01);
	
	
	fprintf(fwp, "%s %d %d %f\n", name, height, weight,bmi);
	printf("%s %d %d %f\n", name, height, weight,bmi);
	*/
	//********************************************************
	
	fclose(frp);
	fclose(fwp);
	
	return 0;
}