#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//int mat[3][4];
	int *pMat1[3];
	int *pMat2[3];
	int *pMat3[3];
	
	// ���� �Ҵ�
	for (int i=0;i<3;i++)
	{
		pMat1[i]  = (int*)malloc(sizeof(int) * 4);
		pMat2[i]  = (int*)malloc(sizeof(int) * 4);
		pMat3[i]  = (int*)malloc(sizeof(int) * 4);
	}

	// �� �ʱ�ȭ
	for (int i = 0; i < 3; i++)
	{
		for (int j= 0 ;j<4;j++ )
		{
			pMat1[i][j] = i*4+j+1;
			pMat2[i][j] = 12 - (i * 4 + j);

		}

	}
	
	//���� ���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<4; j++)
		{
			pMat3[i][j] = pMat1[i][j] + pMat2[i][j];

		}

	}




	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<4; j++)
		{
			printf("%d ", pMat3[i][j]);


		}
		printf("\n");

	}
	
	
	
	
	return 0;
}