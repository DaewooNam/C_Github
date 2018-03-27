#include<stdio.h>

void pSwap(int* pa,int* pb);
void swap(int a, int b);


int main(void)
{


	int a = 2, b = 1;

	swap(a, b);
	printf("a= %d, b= %d\n", a, b);



	pSwap(&a, &b);
	printf("a= %d, b= %d\n", a, b);



	return 0;
}

void pSwap(int* pa, int* pb)
{

	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;


	return;

}


void swap(int a, int b)
{

	int temp;

	temp = a;
	a = b;
	b = temp;


	return;

}