#include<stdio.h>
#include<string.h>


char* my_strcpy(char*dest, char*src);
int my_strlen(char *ps);
char *my_strcat(char* pd, char* ps);


int main(void)
{
	char src[20] = "dog";
	char dest[20] = "baby";

	int num = 0;
	
	//my_strcpy(src,"beautiful");
	//my_strcpy(dest, src);
	//num = my_strlen(src);
	//printf("strlne : %d", num);
	//printf("destination srting is %s\n", dest);


	//my_strcat(src,dest);


	my_strcat(src, dest);

	printf("%s");


	return 0;
}



char* my_strcpy(char*dest, char*src)
{
	char* pAd;

	pAd = dest;


	while (1)
	{
		int i = 0;



		dest[i] = src[i];

		//printf("ch = %c\n", ch[i]);
		//printf("ch_cpy =%c\n", ch[i]);

		/*
		if (src[i]==NULL)
		{
			printf("aaa  ");
			return pAd;
			break;

		}
		i++;


		*/

		while (src != '\0')
		{

			*dest = *src;

			src++;
			dest++;

		}


	}
}
	
	


	




int my_strlen(char *ps)
{

	int cnt = 0;

	while (*ps != '\0')
	{

		ps++;

		cnt++;
		

	}

	return cnt ;

}

char *my_strcat(char* pd, char* ps)
{
	char* p0=&ps[0];

	
	while (1)
	{

		*p0 = *pd;
		
		pd++;
		p0++;
		

		if (*pd == '\0')
		{
			while (1)
			{
				*p0 = *ps;

				p0++;
				ps++;

				if (*ps == '\0')
				{

					
					break;

				}


			}
			break;
		}

	}


	printf("%s", *p0);

	return p0;

	





}



