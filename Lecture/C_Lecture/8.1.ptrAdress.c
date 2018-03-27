//  포입터 변수 주소값 및 변수 값 확인

#include<stdio.h>

int main(void)
{
	
	int ary[5] = { 1,2,3,4,5 };

	/*
	printf("%u\n", ary); // 주소값 출력
	
	printf("%u\n", &ary[0]); // 주소값 출력
	printf("%u\n", &ary[1]); // 주소값 출력
	printf("%u\n", &ary[2]); // 주소값 출력
	printf("%u\n", &ary[3]); // 주소값 출력

	printf("%u\n", &ary[0]); // 주소값 출력
	printf("%u\n", ary+1); // 주소값 출력
	printf("%u\n", ary+2); // 주소값 출력
	printf("%u\n", ary+3); // 주소값 출력
	*/


	int* pa;
	int a = 100;

	pa = &a;

	printf("%u\n", pa);  // pa에 할당된 주소값을 표현
	printf("%d\n", *pa); // pa주소값에 할당된 값을 표현
	printf("%u\n", &a);  // a의 주소값을 표현
	printf("%d\n", a);   // a의 상수값을 표현






	return 0;
}