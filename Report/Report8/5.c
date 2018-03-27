#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


struct cracker
{
	int price;
	int cal;

};



int main(void)
{

	struct  cracker a;
	
	printf("크런치의 가격과 영량을 입력하세요 : ");
	scanf("%d %d", &a.price, &a.cal);
	
	printf("크런치의 가격 : %d 원\n",a.price);
	printf("크런치의 열량 : %d kcal", a.cal);




}