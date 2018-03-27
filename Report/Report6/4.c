#include<stdio.h>
int StrNum(void); 




int main(void)
{

	int leng = 0;



	leng = StrNum();


	printf(" 가장 긴 단어의 길이 : %d", leng);


	

	return 0;
}


int StrNum(void)
{

	char ch='a';
	int cnt = 0;
	int max = 0;
	


	while (1)
	{
		cnt = 0;

		while (1)
		{
			
			ch = getchar();


			cnt++;

			if ((ch == '\n')||(ch==EOF))
			//if ((ch == '\n'))
			{
				break;
			}
			
		}


		

		if (max < cnt)
		{

			max = cnt;
		}



		if (ch == EOF)
		{
			break;
		}
	

	}

	return max-1;

}

