#include<stdio.h>
#include<stdlib.h>

void* my_calloc(int , int );


int main(void)
{
	
	int *pi;
	int *pmi;
	int *pmiAfter;
	//int *5;
	pi = (int *)calloc(5, sizeof(int)); //초기화로 인한 발생할 수 있는 문제점을 보완한다.
	pmi = (int *)malloc(5 * sizeof(int));
	pmiAfter = (int *)realloc(pi, 6 * sizeof(int));

	
	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", pi[i]);
		printf("%d  ", pmi[i]);
		printf("%d\n", pmiAfter[i]);

	}
	
	
	/*
	int* pmiAfter;
	
	pmiAfter = (int * )my_calloc(5, sizeof(int));
	



	
	for(int i =0;i<5;i++)
	printf("%d   ",pmiAfter[i]);
	*/
	return 0;
}


void* my_calloc(int cnt, int size)
{
	int* pi;

	pi = (int *)malloc(cnt*size);

	for (int i =0;i<cnt;i++)
	{

		pi[i] = 0;

	}


	return (void*)pi;

	
}
