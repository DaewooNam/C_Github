#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	char str[10];
	int  i = 0, j=0;
	int  ary[10];
	int  res = 0;
	int  cnt = 0;

	while (1)
	{

		str[i] = getchar()-48;
		
		//printf("str[i] = %d", str[i]);
		
		ary[i] = cnt;

		if (str[i] == -38)
		{
			str[i + 1] = NULL;

			break;
		}
		
		i++;

		cnt++;

	}

	
	
	
	
	//자릿수 결정	

	for (int i = 0;i<cnt;i++)
	{
		ary[i] = pow(10, cnt-i-1 );


	}

	
	
	// 계산

	for (int i=0;i<cnt;i++)
	{

		res += (ary[i] * str[i]);

	}

	printf("결과 : %d", res+10);


	
	
	
	return 0;
	
}