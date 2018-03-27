#include<stdio.h>



int main(void)
{

	double ary[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
	double temp1 = 0.0, temp2 = 0.0, temp3 = 0.0, temp4 = 0.0, temp5 = 0.0;


	temp1 = ary[0];
	temp2 = ary[1];
	temp3 = ary[2];
	temp4 = ary[3];
	temp5 = ary[4];

	ary[0] = temp5;
	ary[1] = temp4;
	ary[2] = temp3;
	ary[3] = temp2;
	ary[4] = temp1;


	for (int i = 0;i<5;i++)
	{
		printf("%.1f  ", ary[i]);
	}
	






}



