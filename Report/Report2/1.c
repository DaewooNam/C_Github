#include<stdio.h>

int main(void)
{

	double tall = 0, weight = 0;

	printf("키와 몸무게를 입력하세요 : ");
	scanf_s("%d %d", &tall, &weight);

	


	if ((tall >= 187.5) && (weight < 80))
		
		printf(" ok \n");
	
	else

		printf("cancel\n");




	return 0;


}