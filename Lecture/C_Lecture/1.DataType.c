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


	printf("ch�� %d�̰� ���� %c�̴�.\n",ch,ch);
	printf("ch2�� %d�̰� ���� %c�̴�.\n", ch2, ch2);

	// �ҹ��� ����
	// �ѱ� X
	// �����X
	// Ư������ X
	//�밡���� ǥ��� ex) bigDog 
	short sh = 100; 
	int int1 = 100;
	long long1 = 100;

	printf("%d %d %d\n", sh, int1, long1);
	printf("%d %o %x\n", sh, sh, sh);
	
	printf("������ ũ��(short) %d \n",sizeof(short));
	printf("������ ũ��(int)   %d \n", sizeof(int));
	printf("������ ũ��(long)  %d \n", sizeof(long));

	printf("������ ũ��(float) %d \n", sizeof(float));
	printf("������ ũ��(double) %d \n", sizeof(double));
	printf("������ ũ��(long double) %d \n", sizeof(long double));

	float fl1 = 100.1f; // f ���� C ��� Standard
	double dou1 = 100.1f;


	printf("���̴� %f\n", PI);
	printf("%lf\n", fl1);
	fl1 = 200.1f;
	printf("%lf\n", fl1);
	printf("%s\n", DESIGN);


	return 0;

}