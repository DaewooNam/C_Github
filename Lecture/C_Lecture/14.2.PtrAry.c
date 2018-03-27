#include<stdio.h>


int main(void)
{
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 5,6,7,8 };
	int ary3[4] = { 9,10,11,12 };

	int *pary[3] = {ary1,ary2,ary3}; // pary에 주소값을 할당

	// pary[][] == *(pary[]+ const)
	for (int i =0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d", pary[i][j]);

		}

	}


	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("%d", *(pary[i] + j));
		}

	}



	return 0;
}