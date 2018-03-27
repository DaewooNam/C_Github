#define _CRT_SECURE_NOWARINGS
#include <stdio.h>

/**********************


if (조건문)
{ 

	//참

}

***********************/




//int main()
//{
//
//
//	int a = 10;
//	int b = 20;
//
//
//	if (a > b) //위 방법을 추천
//	{
//
//		printf("a가 b보다 크다\n");
//
//	}
//
//
//	if (a > b) // 괄호가 없으면 무조건 한줄만 동작 시키게 된다 
//		printf("a가 b보다 크다\n");
//
//
//
//
//	if (a > b) //참
//	{
//		printf("a가 20이다\n");
//	}
//	else if (a == 10)
//
//	{
//		printf("a가 10이다\n");
//	}
//	else if (a == 0)
//	{
//		printf("a가 0이다\n");
//	}
//
//	return 0
//}


	int main()
	{
	int a = 0;
	int b = 0;


	printf("값을 2개를 입력하시요:");
	scanf_s(" %d %d",&a,&b);
	printf("a= %d,  b=%d\n", a, b);



	if (a > b)
	{
		printf("a가 b보다 크다");
		
	}
	else
	{

		printf("a가 b보다 크지 않다");
	}



	return 0;

	}





	
