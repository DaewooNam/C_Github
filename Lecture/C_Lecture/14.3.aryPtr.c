#include<stdio.h>

int *printAryPtr(int(*pa)[4]);


int main(void)
{
	int ary[3][4] = {
		{1,2,3,4 },
		{5,6,7,8 },
		{9,10,11,12 }
	
	};


	//Arrya Poinet(confusing Array Pointer whith Pointer Array)
	int(*pary)[4];
	pary = ary;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<4; j++)
		{
			printf("%3d", pary[i][j]);

		}
		printf("\n");

	}

	printAryPtr(ary);

	return 0;
}




//int *printAryPtr(int pa[3][4])
// Pointer function is handiling data more fast than this fucntion 

 int *printAryPtr(int(*pa)[4])
{
	
	
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<4; j++)
		{
			printf("%3d", pa[i][j]);

			
		}
		printf("\n");

	}

	return 0;


}