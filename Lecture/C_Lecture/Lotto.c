#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int bubbleAry(int*pary, int size);
void LottoNum (int*pary, int size);



int main(void)
{

	int numLo[6];
	int i = 0;
	int size = sizeof(numLo) / sizeof(numLo[0]);



	// �ߺ��� ���� & �ζ� ��ȣ �迭
	

	LottoNum(numLo, size);
	bubbleAry(numLo,size);

	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d", numLo[i]);

	}

	return 0;


}


int bubbleAry(int*pary, int size)
{
	int temp = 0;
	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j < (size - 1); j++)
		{
			if (pary[j] > pary[j + 1])
			{
				temp = pary[j];
				pary[j] = pary[j + 1];
				pary[j + 1] = temp;
			}



		}
	}


	return *pary;


}

void LottoNum(int*pary, int size)
{
	
	int i = 0;
	
	while (1)
	{



		pary[i] = (rand() % 45) + 1;



		for (int j = 0; j < i; j++)
		{
			if ((pary[i] == pary[j]))
			{

				printf("���� �ߺ� �Ǿ����ϴ�.\n");
				i--;

				break;

			}
		}




		i++;

		if (i == 6)
		{
			break;
		}



	}


}




