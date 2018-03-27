#include<stdio.h>


/*
연산 방법
 1. 1차 연산자() [] . -> printf()
 2. 단항 연산자 - -- ~ ! *
 3. 산술연살자 + - * / %
 4. 비트 연산자 >>, <<
 5. 동등연산자 ==, !=
 6. 비트 논리 연산자 & , ^ , |
 7. 조건 논리 연산자 &&, ^^, ||
 8. 삼항연산자 (조건) ? 참 : 거짓
 9. 대입 연산자 += -=, *=, /=, %=, ^=, |=, <<+ >>=
 10. 콤마 연산자 , printf(,)
 11. 증감 연산자 ++ +- -+
 */ 


int main()
{
	int a, b;
	double da, db;
	int sum, sub, mul, inv, div, remain;


	a = 30;
	b = 20;
	da = 2.0;
	db = 0.3;


	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;
	div = a / b;
	remain = a % b;



	printf("sum = %d\n", sum);
	printf("sub = %d\n", sub);
	printf("mul = %d\n", mul);
	printf("inv = %d\n", inv);
	printf("div = %d\n", div);
	printf("remain = %d\n", remain);


	//증감 연산자 (오류 많음)


	int pre, post;
	a = 10;
	b = 10;

	pre = (++a)*3;
	post = (b++)*3;
	printf("pre = %d, a = %d \n", pre, a);
	printf("post = %d, b = %d \n", post,b);

	//관계 연산자 > < >= <= == != true false
	a = 20;
	b = 10;
	printf("a>b  : %d\n",a>b);
	printf("a<b  : %d\n", a<b);
	printf("a>=b : %d\n", a>=b);
	printf("a<=b : %d\n", a<=b);
	printf("a==b : %d\n", a==b);
	printf("a!=b : %d\n", a!=b);

	// 논리 연산자(부호 조심 &,| 한개가 아님) 
	printf("%d\n", (a>b) && (a>=b));
	printf("%d\n", (a>b) || (a >= b));
	printf("%d\n", !(a > b));
	return 0;


}