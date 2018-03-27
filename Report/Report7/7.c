#include<stdio.h>

void exchange(double* pa, double* pb);
void func(void (*fp)(double*  ,double* ),double *pa,double *pb); // a,b의 값이 포인터 값이어야 한다.


int main(void)
{

	double a = 10, b = 20;
	

	
	printf("a:%.1f,  b:%.1f\n", a, b);
	func(exchange, &a, &b);
	printf("a:%.1f,  b:%.1f", a, b);
	


	return 0;
}

void exchange(double* pa, double* pb)
{
	double temp = 0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;


}


void func(void(*fp)(double* , double* ), double *pa, double *pb)
{
	

	fp(pa,pb);
	

	
	
	
	return;
}