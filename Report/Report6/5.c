#include<stdio.h>
void covSt(char *str);

int main(void)
{

	char str[100];
	int  i = 0;

	while (1)
	{
		
		str[i] = getchar();


		if (str[i] == '\n')
		{
			str[i+1] = NULL;
			
			break;
		}
		
		i++;
		

	}
	//printf("%s", str);


	covSt(str);

	printf("conv = %s", str);



	return 0;
}


void covSt(char *st)
{


	while (*st != NULL)
	{
		int flag = 0;
		
		if ((*st >= 'A') && (*st <= 'Z')) //big_to_small
		{
			*st += ('a' - 'A');
			flag = 1;
		}


		if ((*st >= 'a') && (*st <= 'z')&&(flag==0)) //small_to_big
		{
			*st -= ('a' - 'A');

		}

		st++;


	}





}
