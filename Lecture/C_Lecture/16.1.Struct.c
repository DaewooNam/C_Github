#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int num; //�й�
	double grade; //����

};

struct grade
{

	int math;
	int english;
	int science;

};


struct profile
{

	char name[20];
	int age;
	double height;
	char *intro;
	struct grade pro_grd;


};



int main(void)
{
	/*
	struct student s1;
	
	s1.num = 100;
	s1.grade = 4.5;


	printf("num = %d grade = %.1f",s1.num,s1.grade);
	*/


	struct profile daewoo;
	struct profile sana = {"SANA",20,165,0};
	//char charAry[80];

	sana.pro_grd.math = 100;
	sana.pro_grd.english = 100;
	sana.pro_grd.science = 100;


	strcpy(daewoo.name, "DAEWOO");
	daewoo.age    = 10;
	daewoo.height = 130.0;
	daewoo.intro  = (char *)malloc(80);
	gets(daewoo.intro); //scanf ���

	printf("�̸� : %s\n", daewoo.name);
	printf("���� : %d\n", daewoo.age);
	printf("Ű   : %.1f\n", daewoo.height);
	printf("�Ұ� : %s\n", daewoo.intro);



	return 0;
}