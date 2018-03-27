#include<stdio.h>
void reverse(double* pary, int size);
void swap(double* pa, double* pb);



int main(void)
{
	double ary[5] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	int size = sizeof(ary) / sizeof(*ary);


	reverse(ary,size);
	




		
	for (int i = 0; i < size; i++)
	{

		printf("%.1f ", ary[i]);


	}


	return 0;













	//revers(ary, size);

	

}


void reverse(double* pary, int size)
{
	int i = 0, j = size-1;

	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
    double* pFirst;
	double* pLast;
	

	while (1)
	{

		pFirst = &pary[i];
		pLast  = &pary[j];



		swap(pFirst, pLast);

		i++;
		j--;

		if (i == j)
		{
			break;

		}

	}

	

}

void swap(double* pa, double* pb)
{
	double temp = 0.0;

	temp = *pa;
	*pa  = *pb;
	*pb  = temp;

	return;
		
}