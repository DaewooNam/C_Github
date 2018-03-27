#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



typedef struct
{
	int num;
	char name[20];
	int score[5];
	double avg;

}_student;

double print_avg(_student* pavg);

int main(void)
{
	int *pavg;
	_student daewoo;

	

	daewoo.num = 315;
	strcpy(daewoo.name, "대우");


	daewoo.score[0] = 82;
	daewoo.score[1] = 93;
	daewoo.score[2] = 74;
	daewoo.score[3] = 90;
	daewoo.score[4] = 65;
	
	
	print_avg(&daewoo);

	printf("학번 : %d\n",daewoo.num);
	printf("이름 : %s\n", daewoo.name);
	printf("점수 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", daewoo.score[i]);

	}
	printf("\n");
	printf("평균 : %.1f\n",daewoo.avg);

}
double print_avg(_student* pavg)
{
	double sum;
	for (int i = 0; i < 5; i++)
	{

		sum += pavg->score[i];


	}

	return sum / 5;

}