#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
double print_avg(int* pa);

struct student
{
	int num;
	char name[20];
	int score[5];
	double avg;


};




int main(void)
{
	int sum = 0;
	struct student nam;
	
	nam.num =  315 ;
	
	
	nam.score[0] =  82;
	nam.score[1] =  93;
	nam.score[2] =	74;
	nam.score[3] =	90;
	nam.score[4] =	65;

	strcpy(nam.name, "���");


	printf("�й� : %d\n", nam.num);
	printf("�̸� : %s\n", nam.name);
	printf("���� : ");
	for (int i = 0; i < 5; i++)
	{

		printf("%d ", nam.score[i]);
		sum += nam.score[i];

	}
	
	printf("\n");
	printf("�̸� : %d\n", sum);

	nam.avg = print_avg(&sum);
	
	
	printf("��� : %.1f", nam.avg);



	return 0;
}


double print_avg(int* pa)
{
	
	return (double)*pa / 5.0;

}