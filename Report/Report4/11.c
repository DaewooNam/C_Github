#include<stdio.h>


int main(void)
{
	char charSent[30] = "DON'T Worry,Be Happy";

	char  capLet= 65;

	int cnt = 0;
	printf("문장 입력 : %s\n", charSent);




	for (int i=0;i<30;i++)
	{
		for (int j=65;j<=90;j++)
		{
			capLet = j;

			if (charSent[i] == capLet)
			{

				charSent[i] = capLet + 32;
				cnt++;
			}


		}
		
		


	}
	
	printf("문장 입력   : %s\n", charSent);
	printf("바뀐 문자수 : %d\n", cnt);

	
	

	return 0;
}