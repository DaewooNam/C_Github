#include<stdio.h>
void rotate(int* pa, int* pb, int* pc);

int main(void)
{
	int ary[3] = { 1,2,3 };
	char con = 0;
	
	
	while(1)
	{ 
	
		printf("%d:%d:%d", ary[0], ary[1], ary[2]);
		scanf_s("%c", &con);
		
		rotate(&ary[0], &ary[1], &ary[2]);

		if (con != '\n')
		{
			break;
		}
	
	}

	return 0;
}


void rotate(int* pa, int* pb, int* pc)
{
	int temp = 0;

	temp = *pa;
	*pa  = *pb;
	*pb  = *pc;
	*pc  = temp;


	return;
}