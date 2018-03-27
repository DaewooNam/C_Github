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

	pstr = student; // 구조체 이름이 주소값을 나타냄

	print_struct(student);

	


	// 기존 방법
	printf("kor : %d\n", (*pstr).kor);
	printf("eng  : %d\n", (*pstr).eng);
	printf("mat  : %d\n", (*pstr).mat);

	// -> 값을 이용해서 구할 수 있음
	printf("kor  : %d\n", pstr->kor);
	printf("eng  : %d\n", pstr->eng);
	printf("mat  : %d\n", pstr->mat);



}


void print_struct(struct score* pstr) //구조체 변수에 pointer 결정
{
	for (int i = 0; i<3; i++)
	{
		printf("%d\n", (pstr + i)->kor);
		printf("%d\n", (*(pstr + i)).kor);
		printf("%d\n", pstr[i].kor);
	}

}