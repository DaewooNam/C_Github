// ���ڿ� ������
#include<stdio.h>

int main(void)
{

	
	printf("%p\n","dog"); // 16���� �ּҰ��� ����� �� ����, " char "���� �ּҰ��� ��Ÿ��;
	printf("%c\n", *"dog");
	printf("%c\n", *("dog"+1));
	printf("%c\n", "dog"[2]);


	

	const char* animal = "dog";

	printf("%s",animal);
	printf("%p\n",animal);
	animal = "cat";
	printf("%s", animal);
	printf("%p\n", animal);

	// ���ڿ� �Լ�
	// strcpy(copy), strlen(length),strcat(catch),strcmp(compare)


	
	//printf("",);


	return 0;


}