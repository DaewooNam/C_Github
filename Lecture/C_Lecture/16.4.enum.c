#include<stdio.h>

//0 1 2 3
enum season { SPRING, SUMMER, FALL, WINTER }; //enum을 사용하지 않을경우 #define Spring 0 이런식으로 정의 해줘야 함

int main(void)
{

	enum season ss;
	//char* pc;

	ss = FALL;

	switch (ss)
	{
	case SPRING:
		printf("SPRING\n");
		break;
	case SUMMER:
		printf("SUMMER\n");
		break;
	case FALL:
		printf("FALL\n");
		break;
	case WINTER:
		printf("WINTER\n");
		break;
	}

	return 0;
}