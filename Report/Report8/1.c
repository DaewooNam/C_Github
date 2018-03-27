#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int *ptemper1;
	int *ptemper2;

	ptemper1 = (int*)malloc(sizeof(int) * 1);
	ptemper2 = (int*)malloc(sizeof(int) * 1);
	
	*ptemper1 = 30;
	*ptemper2 = 21;


	
	printf("최고기온과 최저기온을 입력하세요 : %d %d\n",*ptemper1,*ptemper2);
	printf("일교차는 %d도 입니다.", *ptemper1- *ptemper2);

	free(ptemper1);
	free(ptemper2);

	return 0;
}