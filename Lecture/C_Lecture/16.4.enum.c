#include<stdio.h>

//0 1 2 3
enum season { SPRING, SUMMER, FALL, WINTER }; //enum�� ������� ������� #define Spring 0 �̷������� ���� ����� ��

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