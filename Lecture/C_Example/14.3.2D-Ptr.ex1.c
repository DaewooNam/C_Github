#include<stdio.h>
void ppSwarp(int **ppa, int **ppb);

int main(void)
{
	int a = 1000, b = 2000; // ���� ��
	int *pa=&a, *pb=&b ;   // �ּҰ�
	

	//printf("%12u\t", &(pa));
	printf("*pa = %d *pb =%d",*pa,*pb);



	ppSwarp(&pa,&pb);


	printf("a = %d, b= %d", a, b);



	return 0;
}



void ppSwarp(int **ppa, int **ppb)
{
	int *ptemp;

	ptemp  = *ppa;
	*ppa   = *ppb;
	*ppb   = ptemp;



}