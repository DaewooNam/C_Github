#include<stdio.h>


int main(void)
{
	
	
	double ary1[14] = { 1.5,2.3,7.7,4.9 };
	double ary2[14] = { 3.4,5.2,4.0,9.1 };
	double ary3[14] = { 0.3,7.2,8.4,6.6 };

	double *dbAry[3] = { ary1,ary2,ary3 };
	double res[3] = { 0, };
	
	double max = 0.0;
	int place = -1;

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < sizeof(ary1) / sizeof(ary1[0]); j++)
		{
			res[i] += dbAry[i][j];

		}


	}

	// 평균이 가장 큰 값
	for (int i = 0; i < 3; i++)
	{
		if (res[i] > max)
		{
			max = res[i];
			place = i;
			//printf("%.1f   ", max/4);
		}


	}

	// 배열 값 출력
	
	printf("%d 번째 배열 : ",place+1);
	
	for (int i =0;i < 4;i++)
	{
		printf("%.1f  ", dbAry[place][i]);


	}
	
	printf("\n");


	// 평균값 출력

	printf("평균 : %.1f", max/4);

	
}