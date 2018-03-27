#include<stdio.h>

int disp_menu(int x);

int main(void)
{
	int sel=0;
	int n = 0;
	sel = disp_menu(n);
	printf("선택된 메뉴는 %d번 입니다. \n", sel);


	return 0;

}


int disp_menu(int x)
{

	printf("1. 볶음짬뽕\n");
	printf("2. 콩나물국밥\n");
	printf("3. 바지락칼국수\n");


	printf("#메뉴를 선택하세요 :");
	scanf_s("%d",&x);

	return x;


}