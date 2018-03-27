#include<stdio.h>
void print_grade(int*ps, int size);

int main(void)
{

	int score[5] = { 72, 88, 95, 64, 100 };
	int size = sizeof(score) / sizeof(*score);


	print_grade(score,size);

	return 0;
}



void print_grade(int*ps, int size)
{
	int star = 0;

	for (int i=0;i<size;i++)
	{
		printf("(%d)", ps[i]);
		
		star = ps[i] / 5;
		
		for (int i = 0; i < star; i++)
		{
			printf("*");
		}
		
		printf("\n");

	}


}