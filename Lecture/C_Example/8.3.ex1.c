#include<stdio.h>
void rotate(int* pa, int* pb, int* pc);

int main(void)
{
	int a = 1, b = 2, c = 3;

	rotate(&a, &b, &c);
	rotate(&a, &b, &c);
	rotate(&a, &b, &c);


	printf("a=%d b=%d c=%d", a, b, c);

	return 0;
}

void rotate(int*pa, int*pb, int*pc)
{
	/* DW code
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;

	temp1 = *pa;
	temp2 = *pb;
	temp3 = *pc;

	*pa = temp3;
	*pb = temp1;
	*pc = temp2;
	*/

	//Researcher code

	int temp;

	temp = *pa;
	*pa  = *pb;
	*pb  = *pc;
	*pc  = temp;

	return;



}