#include<stdio.h>
void my_get(char*str, int size);
void my_get_ProF(char*str, int size);

int main(void)
{
	char str[20];
	int size = sizeof(str);
	



	my_get(str,size);
	printf("%s", str);



	return 0;

}

/*
void my_get_ProF(char* str, int size)
{

	char ch;
	ch = getchar();

	for (int i = 0;(ch!="wn")&&(i<size-1);i++)
	{

		str[i] = ch;
		ch = getchar();
		str[i + 1] = NULL;

	}

}
*/

void my_get(char*str,int size)
{

	
	for (int i =0; i<size;i++)
	{
		str[i] = getchar();
		
		
		if (str[i]=='\n')
		{
			str[i + 1] = NULL;

			break;
		}
		

	}

	
	

}