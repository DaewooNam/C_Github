#include<stdio.h>
double centi_to_meter(double x);


int main(void)
{
	double tall_centi = 185;
	double tall_meter = 0;

	tall_meter = centi_to_meter(tall_centi);

	printf("%.2fm", tall_meter);

	return 0;
}



double centi_to_meter(double x)
{


	return x*0.01 ;


}