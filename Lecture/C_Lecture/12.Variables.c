#include<stdio.h>

void auto_func(void);
void static_func(void);



int main(void)
{
	printf("auto_func : ");
	for (int i = 0; i < 3; i++)
	{
		auto_func();

	}
	
	printf("\nstatic_func : ");
	for (int i = 0; i < 3; i++)
	{
		static_func();

	}




	return 0;
}


void auto_func(void)
{

	auto int a = 0;
	a++;
	printf("%d",a);

}
void static_func(void)
{
	static int a ; // �ʱ�ȭ ���� �ʾƵ� 0 ���� �Է� �Ǿ���
	a++;
	printf("%d", a);

}
