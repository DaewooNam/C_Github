#include <stdio.h>
// ����ȯ
// ���մ��� += -=
// �޸� ������
// ���� ������(���� ������) (����)? �� : ����
// ��Ʈ ������



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
	


	//sizeof �Լ� byte

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(int));




	//���մ��� + - * % / (�ڵ尡 ������°��� �����ϱ� ���ؼ� ���)

	a += 10; // a =a +10;
	b -= 5;  // b = b-5; 
	c *= 2;  // c = c*2;
	d %= 2;  // d = d%2;

	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);


	//�޸� ������ (���� �߻� �Ҽ� ����.)
	printf("%d\n",(a,b));


	//��Ʈ ������ & | ^(nor) ~(reverse) << >>(shift operation )
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
	

	//���׿����� (if�� ���� �����ϰ� ���� but �������� ������)

	a = 10;
	b = 20;
	res = (a < b) ? 1000 : 10;
	res = (a < b) ? printf("�ȳ�") : printf("bye");



	//res = (a < b) ? (a=b)? 10000 : 1 : 10;
	printf("res = %d\n", res);


	//�ּҿ����� (&), ��������������(*) ������
	//�������(.), ����������ٿ�����(->) ����ü



	//����
	a = 10;
	b = 5;

	res = a / b * 2;
	res = ++a * 3;
	res = a % 3 == 0;
	res = a > b && a != 5;



	return 0;


}