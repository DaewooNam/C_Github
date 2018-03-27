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

		printf("파일을 읽을 수가 없습니다.\n");
		return 0;
	}



	while (1)
	{



		printf("학번 : ");
		scanf("%d", &deg);
		if (deg == -1)
		{

			break;
		}
		
		
		
		fprintf(fp, "%d\n", deg);
		



		printf("이름 : ");
		scanf("%s", name);
		fprintf(fp, "%s", name);


		printf("나이 : ");
		scanf("%d", &age);
		fprintf(fp, " %d", age);


		printf("키 : ");
		scanf("%lf", &tall);
		fprintf(fp, " %.1f\n", tall);



		printf("주소 : ");
		scanf("%s", adr);
		fprintf(fp, "%s\n", adr);




	}

	fclose(fp);

	return 0;
}