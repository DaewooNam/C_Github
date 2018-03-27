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
	strcpy(menu.kr_name, "마음과 마음");
	strcpy(menu.kr_name, "이태원동 557 지하1층 ");




	printf("************************************\n");
	printf("이름		  : %s\n", menu.kr_name);
	printf("칼로리	      : %d(kal)\n", menu.cal);
	printf("가격		  : %d(원)\n", menu.price);
	printf("영어이름	  : %s\n", menu.en_name);
	printf("유명맛집 주소 : %s\n", menu.adr);
	printf("평점          : %d\n", menu.avg);
	*/

	struct food1 donggas = {
	"돈가스",
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

	printf("평점 : %.1f",donggas.point);

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