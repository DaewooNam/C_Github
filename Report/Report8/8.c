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

	

	struct profile new_staff[5]; // ����ü �迭 ����

	printf("�̸�, ����, ���� ������ �Է��ϼ���.\n");

	input_data(new_staff);    //����Ʈ�� ����ϴ� �Լ� ȣ��

	printf("[����Ʈ ���]\n");
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
