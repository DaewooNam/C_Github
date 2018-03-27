#include <stdio.h>
#define PI 3.141592653
#define DESIGN "DAEWOO"


//signed + - 
//unsigned +
//char 8 bit 1byte  <= made by US 


//short 16bit 2byte
//int   32bit 
//long  32bit 64bit
//long long 64bit

//float 32bit
//double 64bit
//long double 64bit~




int main()
{

	char  ch = 97;
	char  ch2 = 'a';


	printf("ch는 %d이고 문자 %c이다.\n",ch,ch);
	printf("ch2는 %d이고 문자 %c이다.\n", ch2, ch2);

	// 소문자 시작
	// 한글 X
	// 예약어X
	// 특수문자 X
	//헝가리안 표기법 ex) bigDog 
	short sh = 100; 
	int int1 = 100;
	long long1 = 100;

	printf("%d %d %d\n", sh, int1, long1);
	printf("%d %o %x\n", sh, sh, sh);
	
	printf("변수의 크기(short) %d \n",sizeof(short));
	printf("변수의 크기(int)   %d \n", sizeof(int));
	printf("변수의 크기(long)  %d \n", sizeof(long));

	printf("변수의 크기(float) %d \n", sizeof(float));
	printf("변수의 크기(double) %d \n", sizeof(double));
	printf("변수의 크기(long double) %d \n", sizeof(long double));

	float fl1 = 100.1f; // f 값은 C 언어 Standard
	double dou1 = 100.1f;


	printf("파이는 %f\n", PI);
	printf("%lf\n", fl1);
	fl1 = 200.1f;
	printf("%lf\n", fl1);
	printf("%s\n", DESIGN);


	return 0;

}