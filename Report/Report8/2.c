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
	int flag = 0; //초기값
	int sizeBef = 0;

	while(1)
	{
		
		i = 0; // 초기화 해주는 값 주의
		
		printf("메모 입력 : ");
		while (1)
		{
			
			
			scanf("%c", &str[i]);


			if (str[i] == '\n')
			{
				str[i] = ' ';
				i++;
				size = i; // space 값 대입
				
				break;
			}
			i++;

			
		}

		if ((str[0] == 'e') && (str[1] == 'n') && (str[2] == 'd')) //end 값일때 위 함수 종료
		{
			break;

		}





		if (flag ==0)
		{
			pStr = (char*)malloc(sizeof(char) * size); // 초기값
			flag = 1;

			for (int i = 0; i < size; i++)
			{
				pStr[i] = str[i];

			}

			
			sizeBef = size;
		}
		else
		{
			
			//pStr = (char*)realloc(pStr, sizeof(char)  * size); //값을 증가
			realloc(pStr, sizeof(char)  * sizeBef+size); //값을 증가


		

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


