// 포인터 함수 크기 비교
// 포인터 변수의 형변화 (되도록 사용하지 말것)
#include<stdio.h>


int main(void)
{
	char ch;
	int in;
	double dou;


	

	char* pch = &ch;
	int* pin = &in;
	double* pdou = &dou;


	printf("char   = %d byte\n", sizeof(ch));
	printf("int    = %d byte\n", sizeof(in));
	printf("double = %d byte\n", sizeof(dou));


	printf("pch    = %d byte\n", sizeof(pch));
	printf("pin    = %d byte\n", sizeof(pin));
	printf("pdou   = %d byte\n", sizeof(pdou));


	double dou2 = 3.4;
	double* pdou2 = &dou2;

	
	
	int* pin2;
	pin2 = (int *)pdou2;

	printf("%.2f\n", dou2);
	printf("%.2f\n", *pdou2);
	printf("%.2f\n", *pin2); // 부호 * 값 * 소수점(e값) 여기서 소수점 값이 0이 되므로 출력 값은 0가 된다.

	
	
	
	int in3 = 3;
	int* pin3 = &in3;

	double* pdou3;
	pdou3 = (double *)pin3;


	printf("%d\n", in3);
	printf("%d\n", *pin3);
	printf("%d\n", *pdou3);

}