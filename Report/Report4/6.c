#include<stdio.h>
int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);



int main(void)
{
	int kor = 0, eng = 0, mat = 0;
	int sum = 0;
	double avg=0;

	printf("#�� ������ ���� �Է� : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	
	sum = total(kor,eng,mat);
	avg = average(sum);


	print_title();
	printf("%d    %d    %d    %d    %.1f",kor,eng,mat,sum,avg);

	
	
	return 0;

}



int total(int kor, int eng, int mat)
{

	return kor + eng + mat;

}

double average(int tot)
{
	return tot / 3.0;

}

void print_title(void)
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  ==== < ����ǥ > ==== \n");
	printf("-------------------------------\n");
	printf("����  ����  ����  ����  ���\n");
	printf("-------------------------------\n");

	return;


}
