#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int deg=0, age;
	double tall = 0;
	char name[30], adr[30];

	FILE *fp = fopen("output3.txt", "w");



	if (fp == NULL)
	{

		printf("������ ���� ���� �����ϴ�.\n");
		return 0;
	}



	while (1)
	{



		printf("�й� : ");
		scanf("%d", &deg);
		if (deg == -1)
		{

			break;
		}
		
		
		
		fprintf(fp, "%d\n", deg);
		



		printf("�̸� : ");
		scanf("%s", name);
		fprintf(fp, "%s", name);


		printf("���� : ");
		scanf("%d", &age);
		fprintf(fp, " %d", age);


		printf("Ű : ");
		scanf("%lf", &tall);
		fprintf(fp, " %.1f\n", tall);



		printf("�ּ� : ");
		scanf("%s", adr);
		fprintf(fp, "%s\n", adr);




	}

	fclose(fp);

	return 0;
}