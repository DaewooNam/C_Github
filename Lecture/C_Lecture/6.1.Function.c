#include <stdio.h>

int add(int x, int y); //����
int add2(void);
void add3(int x, int y); 


void car(int i); //����Լ�

int main(void)
{
	/*
	int sum = 0;

	sum = add(3, 4);

	printf("sum = %d\n", sum);
	*/


	car(1);


	return 0;

}



void car(int i) //����Լ�
{
		
	printf("������ %d \n", i);

	if (i == 10)
	{
		return;
	}

	

	car(i+1);

	
}



int add(int x, int y) // ����
{

	int sum = 0;
	sum = x + y;

	return sum;
}

int add2(void) //����
{
	int sum=0;
	sum = 3 + 4;
	return sum;
}

void add3(int x, int y)
{
	int sum = 0;

	sum = x + y;

	return;



}