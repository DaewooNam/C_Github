#include <stdio.h>
// 형변환
// 복합대입 += -=
// 콤마 연산자
// 조건 연산자(삼항 연산자) (조건)? 참 : 거짓
// 비트 연산자



int main()
{

	int a = 20;
	int b = 3; 
	int c = 2;
	int d = 1;
	double e;
	int res;
	double;


	e = (double)a; // e = 20.0;

	printf("%.2f,%.2lf\n", (double)e,(double)b);
	printf("%d\t", a / b);
	printf("%.2lf\n", ((double)a / (double)b));

	printf("%d\n", a % b);
	


	//sizeof 함수 byte

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(int));




	//복합대입 + - * % / (코드가 길어지는것을 방지하기 위해서 사용)

	a += 10; // a =a +10;
	b -= 5;  // b = b-5; 
	c *= 2;  // c = c*2;
	d %= 2;  // d = d%2;

	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);


	//콤마 연산자 (오류 발생 할수 있음.)
	printf("%d\n",(a,b));


	//비트 연산자 & | ^(nor) ~(reverse) << >>(shift operation )
	printf("*****************************************\n", a&b); // and

	a = 1;
	b = 2;

	printf("%d\n", a&b); // and



	printf("%d\n", a&b); // and
	printf("%d\n", a|b); // or
	printf("%d\n", a^b); //
	printf("%d\n", ~a);
	printf("%d\n", a >> 1);
	printf("%d\n", a << 1);
	

	//삼항연산자 (if문 보다 간결하고 빠름 but 가독성이 떨어짐)

	a = 10;
	b = 20;
	res = (a < b) ? 1000 : 10;
	res = (a < b) ? printf("안녕") : printf("bye");



	//res = (a < b) ? (a=b)? 10000 : 1 : 10;
	printf("res = %d\n", res);


	//주소연산자 (&), 간접참조연산자(*) 포인터
	//멤버변수(.), 간접멤버전근연산자(->) 구조체



	//순서
	a = 10;
	b = 5;

	res = a / b * 2;
	res = ++a * 3;
	res = a % 3 == 0;
	res = a > b && a != 5;



	return 0;


}