#include<stdio.h>

char* my_strcpy(char*dest, char*src); //charcater 형 주소값 출력
int my_strlen(char *ps);
char *my_strcat(char* pd, char* ps);
int my_strcmp(char* pa, char* pb);


int main(void)
{
	char dest[20] = "abc";
	char src[20]  = "";
	char ps[20]   = "dog";
	char pd[20]   = "baby";

	int num = 0;


	//***************************
	// 1번째 문제
	//my_strcpy(src, "abc");
	//printf("%s", src);
	
	
	
	//***************************
	// 2번째 문제
	//num = my_strlen(ps);
	//printf("my_strlen : %d",num);

	//***************************
	// 3번째 문제
	//printf("%s", my_strcat(ps, "baby"));


	//***************************
	// 4번째 문제
	
	//num = my_strcmp(ps,pd);
	
	//printf("%d", num);



	return 0;
}


char* my_strcpy(char*dest, char*src)
{
	char* pAd;

	pAd = dest;


	while (*src != '\0') // 이때 값이 중요해!! *값!
	{

		*dest = *src;

		src++;
		dest++;

	}

	return pAd;
	
	
}


int my_strlen(char *ps)
{

	int cnt = 0;

	while (*ps != '\0')
	{

		ps++;

		cnt++;


	}

	return cnt;

}


char *my_strcat(char* pd, char* ps)
{
	
	char *po = pd;
	
	while (*pd != '\0')
	{

		pd++;

	}

	while (*ps!= '\0')
	{

		*pd = *ps; // 질문
		pd++;
		ps++;

	}

	*pd = '\0';


	
	return po;
}


int my_strcmp(char* pa, char* pb)
{
	while ((*pa != '\0') && (*pa == *pb))
	{
		pa++;
		pb++;
	}

	if (*pa>*pb)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}