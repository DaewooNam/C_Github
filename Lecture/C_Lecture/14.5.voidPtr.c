#include<stdio.h>

int main(void)
{

	int    a = 10;
	double b = 3.5;
	char   c = 'c';
	
	int    *pa;
	double *pb;
	//double  vpa;
	void   *vpa;
	
	
	pa  = &a;
	vpa = &a;

	printf("*vpa: %d\n",*((int *)vpa) );
	printf("*pa : %d\n", *pa);
	printf("a   : %d\n", a);

	pb = &b;
	vpa = &b; //double �ּ� �Ҵ�

	printf("*vpa: %f\n", *((double *)vpa));
	printf("*pb : %f\n", *pb);
	printf("b   : %f\n", b);
	//printf("*vpa: %d\n", *vpa); // type ���� ������ �ֱ� ������ �ҷ��ü� ����



	return 0;

}