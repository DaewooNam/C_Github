#include<stdio.h>


int main(void)
{
	//초기화


	double res = 0.0;
	int min = 100, max = 0;
	int placeMax = 0, placeMin = 0;
	int ary[5] = { 7,9,4,8, 5 };


	// 첫번째 출력값
	printf("5명의 심사위원의 점수 입력 : ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);


	}

	// 두번째 출력값
	// max&min 값and 위치


	for (int i = 0; i < 5; i++)
	{
		if (max < ary[i])
		{

			max = ary[i];
			placeMax = i;

		}

		if (min > ary[i])
		{

			min = ary[i];
			placeMin = i;

		}



	}

	ary[placeMax] = 0;
	ary[placeMin] = 0;

	printf("\n유효점수 : ");

	for (int i = 0; i < 5; i++)
	{
		if (ary[i] != 0)
		{
			printf("%d ", ary[i]);

		}

	}

	//3번째 출력값

	for (int i = 0; i < 5; i++)
	{

		res += ary[i];

	}

	printf("\n평균 : %.1f", res / 3.0);












	return 0;
}