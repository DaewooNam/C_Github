#include<stdio.h>

int disp_menu(int x);

int main(void)
{
	int sel=0;
	int n = 0;
	sel = disp_menu(n);
	printf("���õ� �޴��� %d�� �Դϴ�. \n", sel);


	return 0;

}


int disp_menu(int x)
{

	printf("1. ����«��\n");
	printf("2. �ᳪ������\n");
	printf("3. ������Į����\n");


	printf("#�޴��� �����ϼ��� :");
	scanf_s("%d",&x);

	return x;


}