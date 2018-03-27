#include<stdio.h>
void printAry(int*pary, int size);
int bubbleAry(int*pary, int size);
int selectAry(int*pary, int size);


int main(void)
{
	// Resarcher Code

	int ary[5] = { 20,10,30,60,50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int *pstart = ary;
	int *pend = ary + (size - 1);
	int temp = 0;
	

	



	printAry(ary, size);
	/***************************************
	/* 앞 뒤 숫자 위치 변환
	while (pstart < pend)
	{
		temp = *pstart;
		*pstart = *pend;
		*pend = temp;

		pstart++;
		pend--;

		if (pstart == pend)
		{

			break;
		}


	}
	*****************************************/



	selectAry(ary, size);

	
	
	//bubbleAry(ary, size);

	printAry(ary, size);

	printf("min = %d, max = %d", ary[0], ary[4]);


	




	


	return 0;
}


void printAry(int*pary, int size)
{

	for (int i = 0; i < size; i++)
	{

		printf("%5d\t ", pary[i]);


	}
	printf("\n");

}


// Bubble Sort
int bubbleAry(int*pary, int size)
{
	int temp = 0;
	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j < (size-1); j++)
		{
			if (pary[j] > pary[j + 1])
			{
				temp = pary[j];
				pary[j] = pary[j + 1];
				pary[j + 1] = temp;
			}



		}
	}


	return *pary;


}


// Select Sort
int selectAry(int*pary, int size)
{
	int min = 1000;
	int temp = 0;
	int place = 0;


	for (int i = 0; i < size; i++)
	{
		min = 1000;

		for (int j = i;  j< size; j++)
		{
			if (min > pary[j])
			{

				min = pary[j];
				place = j;


			}


		}

		temp = pary[place];
		pary[place] = pary[i];
		pary[i] = temp;

	}

	return *pary;

}

