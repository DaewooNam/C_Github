#include<stdio.h>


/*
���� ���
 1. 1�� ������() [] . -> printf()
 2. ���� ������ - -- ~ ! *
 3. ��������� + - * / %
 4. ��Ʈ ������ >>, <<
 5. ������� ==, !=
 6. ��Ʈ �� ������ & , ^ , |
 7. ���� �� ������ &&, ^^, ||
 8. ���׿����� (����) ? �� : ����
 9. ���� ������ += -=, *=, /=, %=, ^=, |=, <<+ >>=
 10. �޸� ������ , printf(,)
 11. ���� ������ ++ +- -+
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


	//���� ������ (���� ����)


	int pre, post;
	a = 10;
	b = 10;

	pre = (++a)*3;
	post = (b++)*3;
	printf("pre = %d, a = %d \n", pre, a);
	printf("post = %d, b = %d \n", post,b);

	//���� ������ > < >= <= == != true false
	a = 20;
	b = 10;
	printf("a>b  : %d\n",a>b);
	printf("a<b  : %d\n", a<b);
	printf("a>=b : %d\n", a>=b);
	printf("a<=b : %d\n", a<=b);
	printf("a==b : %d\n", a==b);
	printf("a!=b : %d\n", a!=b);

	// �� ������(��ȣ ���� &,| �Ѱ��� �ƴ�) 
	printf("%d\n", (a>b) && (a>=b));
	printf("%d\n", (a>b) || (a >= b));
	printf("%d\n", !(a > b));
	return 0;


}