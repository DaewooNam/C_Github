#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile
{
	char name[20];
	double grade;
	int english;

};

void input_data(struct profile *staff);
void elite(struct profile *staff);


int main(void)
{

	

	struct profile new_staff[5]; // 구조체 배열 선언

	printf("이름, 학점, 영어 점수를 입력하세요.\n");

	input_data(new_staff);    //엘리트를 출력하는 함수 호출

	printf("[엘리트 사원]\n");
	elite(new_staff);

	return 0;

}


void input_data(struct profile *staff)
{



	for (int i = 0; i < 5; i++)
	{
		scanf("%s %lf %d", &staff[i].name, &staff[i].grade, &staff[i].english);


	}


}


void elite(struct profile *staff)
{

	for (int i = 0; i < 5; i++)
	{
	
		
		if ((staff[i].grade >= 4.0) && (staff[i].english >= 900))
		{
			printf("%s %.1f %d\n", staff[i].name, staff[i].grade, staff[i].english);

		}


	}



}
