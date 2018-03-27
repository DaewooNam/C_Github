#include<stdio.h>


int main(void)
{
	char str_name[100];
	char str_num[100];
	char str_adr[100];

	int size_name = sizeof(str_name)/sizeof((str_name[0]));
	int size_num  = sizeof(str_num) / sizeof((str_num[0]));
	int size_adr  = sizeof(str_adr) / sizeof((str_adr[0]));

	printf("이름 : ");
	fgets(str_name, size_name, stdin);

	/*
	printf("전화번호 : ");
	fgets(str_num, size_num, stdin);


	printf("주소 : ");
	fgets(str_adr, size_adr, stdin);
	*/


	//printf 출력 값 조절 Q

	printf("%s", str_name );

	printf("********");
	


	return 0;
}