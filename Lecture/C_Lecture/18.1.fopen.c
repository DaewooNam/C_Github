#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int height;
	int weight;
	char ch;
	double bmi;
	char name[10];
	
	FILE *frp = fopen("foo.txt","r"); //r �б� w ���� a �ٿ�����
	
	if (frp ==NULL) //���� ó��
	{
		printf("������ ���� ���� �����ϴ�.\n");
		return 0;

	}

	FILE *fwp = fopen("foo2.txt", "w");
	
	if (fwp == NULL)
	{
		printf("������ ���� ���� �����ϴ�.\n");
		return 0;

	}

	while (1) //getchar() ���� ��ġ
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