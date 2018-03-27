#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	char str[30] = { 0, };
	char *pStr;
	char *pStrAfter;

	
	pStr = (char*)malloc(sizeof(char) * 5);
	for (int i = 0; i < 5; i++)
		pStr[i] = 'a';
	

	//pStr = 'a';
	//printf("%c",pStr);
	pStr = (char*)realloc(pStr, sizeof(char) *10);
	
	


	for (int i = 5; i < 10; i++)
		pStr[i] = 'b';
	
	//realloc(pStr, sizeof(char) * 5);
	
	

	//for (int i = 10; i < 15; i++)
		//pStr[i] = 'c';

	
	



	/*
	realloc(pStrAfter, sizeof(char) * 5);

	for (int i = 10+1; i < 15; i++)
		pStrAfter[i] = 'c';
		*/
	for (int i = 0; i < 15; i++)
	{

	printf("pStr%d    = %c\n", i,pStr[i]);
	//printf("pStrAfter =%c\n", pStrAfter[i]);
	
	}
	/*





	
	/*
	int *pi;
	int *pmiAfter;
	
	pi = (int *)malloc(5*sizeof(int)); //초기화로 인한 발생할 수 있는 문제점을 보완한다.


	for(int i=0;i<5;i++)
	pi[i] = i;


	pmiAfter = (int *)realloc(pi, 6 * sizeof(int));


	for (int i = 0; i < 5; i++)
	{
		printf("%c  ", pi[i]+72);
		printf("%c\n", pmiAfter[i]+72);

	}

	*/
	
	return 0;
	

}


