#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//stringcmp


int main(void)
{

	char str[30] = { 0, };
	char *pStr;


	int i = 0;
	int size = -1;
	int flag = 0; //�ʱⰪ
	int sizeBef = 0;

	while(1)
	{
		
		i = 0; // �ʱ�ȭ ���ִ� �� ����
		
		printf("�޸� �Է� : ");
		while (1)
		{
			
			
			scanf("%c", &str[i]);


			if (str[i] == '\n')
			{
				str[i] = ' ';
				i++;
				size = i; // space �� ����
				
				break;
			}
			i++;

			
		}

		if ((str[0] == 'e') && (str[1] == 'n') && (str[2] == 'd')) //end ���϶� �� �Լ� ����
		{
			break;

		}





		if (flag ==0)
		{
			pStr = (char*)malloc(sizeof(char) * size); // �ʱⰪ
			flag = 1;

			for (int i = 0; i < size; i++)
			{
				pStr[i] = str[i];

			}

			
			sizeBef = size;
		}
		else
		{
			
			//pStr = (char*)realloc(pStr, sizeof(char)  * size); //���� ����
			realloc(pStr, sizeof(char)  * sizeBef+size); //���� ����


		

			for (int i = sizeBef; i < size+sizeBef; i++)
			{

				pStr[i] = str[i-sizeBef];

			}



			sizeBef += size;
			//printf("sizeBef = %d", sizeBef);

		}
		
		
		
	
	
	}

	for (int i = 0; i < sizeBef; i++)
	{
		printf("%c", pStr[i]);


	}

	free(pStr);
	

}


