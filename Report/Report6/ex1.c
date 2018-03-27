#include<stdio.h>


int main(void)
{
	do
	{
		ch = getchar();
		chStr[i] = ch;
		i++;
	
	
	} while (ch != '\n');
	cnStr[i] = '\0';


	strSzie = strlen(chStr);

	fo(int i = 0;i<strSize-1;i++)
	{
		printf("%d\n", chStr[i] - ('0'));


	}


	return 0;
}