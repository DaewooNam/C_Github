#include<stdio.h>


int main(void)
{
	char charSent[30] = "DON'T Worry,Be Happy";

	char  capLet= 65;

	int cnt = 0;
	printf("���� �Է� : %s\n", charSent);




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
	
	printf("���� �Է�   : %s\n", charSent);
	printf("�ٲ� ���ڼ� : %d\n", cnt);

	
	

	return 0;
}