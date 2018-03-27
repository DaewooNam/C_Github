#include<stdio.h>


int main(void)
{

	int a = 10;
	int *pa;
	int **ppa;

	pa  = &a;
	ppa = &pa;

	printf("변수\t       값\t  주소\t       참조 \t  참참조 \n", a, &a);
	printf("  a  %12d %12u \n",a,&a);
	printf(" pa  %12d %12u %12d\n", pa, &pa,*pa);
	printf("ppa  %12d %12u %12d %12d\n", ppa, &ppa, *ppa,**ppa);



	return 0;
}