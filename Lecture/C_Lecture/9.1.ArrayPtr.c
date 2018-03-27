#include<stdio.h>

int main()
{

	int ary[3];

	int *pa = ary;


	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];


}









/*
void main(void)
{

	int ary[3]; // ÁÖ¼Ò°ª



	*(ary) = 10;


	printf("%d", *ary);

	*(ary + 0) = 10;
	
	
	
	*(ary + 1) = *(ary + 0) + 10;


	printf("\n");
	scanf_s("%d", ary + 2);

	for (int i = 0;i<3;i++)
	{

		printf("%5d\t",*(ary+i));

	}



	return ;

}
*/