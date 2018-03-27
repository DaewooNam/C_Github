#include<stdio.h>

int main(void)
{
	double avg=0,sum=0;
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double* pa=ary;
	double size = sizeof(ary) / sizeof(ary[0]);



	printf("배열 요소의 값 : ");
	for (int i = 0;i<5;i++)
	{
		printf("%.1f ", pa[i]);
		sum = sum + *(pa + i);

	}
	avg = sum / 5;
	
	printf("\n평균 : %.2f",avg);


	



	return 0;
}