// 문자열 포인터
#include<stdio.h>

int main(void)
{

	
	printf("%p\n","dog"); // 16진수 주소값을 출력할 수 있음, " char "값은 주소값을 나타냄;
	printf("%c\n", *"dog");
	printf("%c\n", *("dog"+1));
	printf("%c\n", "dog"[2]);


	

	const char* animal = "dog";

	printf("%s",animal);
	printf("%p\n",animal);
	animal = "cat";
	printf("%s", animal);
	printf("%p\n", animal);

	// 문자열 함수
	// strcpy(copy), strlen(length),strcat(catch),strcmp(compare)


	
	//printf("",);


	return 0;


}