#include<stdio.h>


void plus_point(double *x);
void  gradeup(struct food1*);


struct food
{
	int price , avg , cal ;
	char kr_name[30];
	char en_name[30];
	char adr[100];

};


struct food1
{
	char name[20];
	int carl;
	int price;
	char nameEng[20];
	char *address;
	double point;
};



int main(void)
{
	/*
	struct food menu;
	menu.price = 12500;
	menu.avg = 4.0;
	menu.cal = 500;

	strcpy(menu.en_name, "heart to heart");
	strcpy(menu.kr_name, "������ ����");
	strcpy(menu.kr_name, "���¿��� 557 ����1�� ");




	printf("************************************\n");
	printf("�̸�		  : %s\n", menu.kr_name);
	printf("Į�θ�	      : %d(kal)\n", menu.cal);
	printf("����		  : %d(��)\n", menu.price);
	printf("�����̸�	  : %s\n", menu.en_name);
	printf("������� �ּ� : %s\n", menu.adr);
	printf("����          : %d\n", menu.avg);
	*/

	struct food1 donggas = {
	"������",
	800,
	7000,
	"Donggas",
	"",
	4.0


	};


	// Structure pointer
	plus_point(&donggas.point);
	plus_point(&donggas.point);

	//plus_point(&donggas.point);

	printf("���� : %.1f",donggas.point);

	return 0;

}


void plus_point(double *x)
{
	return *x += 0.1;


}



void  gradeup(struct food1 *dish)
{
	(*dish).point += 0.1;

}