void arysum(int(*pa)[3], int(*pb)[3], int(*pc)[3]);
void arytimes(int(*pa)[3], int(*pb)[3], int(*pc)[3], int row, int col);

#include<stdio.h>

int main(void)
{
	//int pa[3][3] = { {1,2,3,},{4,5,6,},{7,8,9} };
	//int pb[3][3] = { {1,2,3,},{4,5,6,},{7,8,9} };
	int pc[10][10] = { 0, };

	//int pa[2][3] = { {1,2,3},{4,5,6} };
	//int pb[3][2] = { {1,2},{4,5},{7,8} };
	int pa[2][2] = {{1,2}, {3,4}};
	int pb[2][2] = {{}, {} };
	




	int row = 100, col = 100;
	int ary[100];
	int cnt = 0;


	// ÇàÀÇ °¹¼ö
	row = sizeof(pa) / sizeof(pa[0]);

	// ¿­ÀÇ °¹¼ö
	col = sizeof(pa) / (sizeof(int)*row);

	int i = 2;
	int j = 2;
	int pc[3][3];

	//arysum(pa, pb, pc);



	arytimes(pa, pb, pc, row, col);


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", pc[i][j]);

		}

		printf("\n");

	}

	/*

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			pc[i][j];

			if (pc[i][j] != '0')
			{
				ary[cnt] = pc[i];
				cnt++;
			}
		}



	}

	printf("%d", ary[0]);








	/*
	for (int i=0;i<(cnt/2);i++)
	{
		for (int j=i;j<(cnt/2);j++)
		{
			printf("%d",ary[j]);
		}

		printf("\n");
	}



	/*
	for (int i = 0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d\t",pc[i][j]);

		}

		printf("\n");

	}


	printf("\n");




	//arytimes(pa, pb, pc, row, col);




	*/
	return 0;
}


void arysum(int(*pa)[3], int(*pb)[3], int(*pc)[3])
{


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			pc[i][j] = pa[i][j] + pb[i][j];

		}


	}



}


void arytimes(int(*pa)[3], int(*pb)[3], int(*pc)[3], int row, int col)
{
	for (int k = 0; k < 100; k++)
	{


		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				pc[i][j] = pa[i][j] * pb[j][i];

			}


		}
	}



}