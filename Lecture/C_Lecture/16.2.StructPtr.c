#include<stdio.h>

void print_struct(struct score* );


struct score
{

	int kor;
	int eng;
	int mat;

};



int main(void)
{
	struct score dongbin    = { 90,80,70 };
	struct score *pstr      = &dongbin;
	struct score student[3];
	
	student[0].kor = 100;
	student[1].kor = 99;
	student[2].kor = 98;

	student[0].eng = 100;
	student[1].eng = 100;
	student[2].eng = 100;

	student[0].mat = 100;
	student[1].mat = 100;
	student[2].mat = 100;

	pstr = student; // ����ü �̸��� �ּҰ��� ��Ÿ��

	print_struct(student);

	


	// ���� ���
	printf("kor : %d\n", (*pstr).kor);
	printf("eng  : %d\n", (*pstr).eng);
	printf("mat  : %d\n", (*pstr).mat);

	// -> ���� �̿��ؼ� ���� �� ����
	printf("kor  : %d\n", pstr->kor);
	printf("eng  : %d\n", pstr->eng);
	printf("mat  : %d\n", pstr->mat);



}


void print_struct(struct score* pstr) //����ü ������ pointer ����
{
	for (int i = 0; i<3; i++)
	{
		printf("%d\n", (pstr + i)->kor);
		printf("%d\n", (*(pstr + i)).kor);
		printf("%d\n", pstr[i].kor);
	}

}