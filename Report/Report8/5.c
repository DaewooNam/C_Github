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
	
	printf("ũ��ġ�� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a.price, &a.cal);
	
	printf("ũ��ġ�� ���� : %d ��\n",a.price);
	printf("ũ��ġ�� ���� : %d kcal", a.cal);




}