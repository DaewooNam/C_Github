#define _CRT_SECURE_NO_WARNINGS
#include"people.h"
#include"func.h"


int main(void)
{

	struct nam people1;
	struct nam people2;
	struct nam people3;
	struct nam people4;
	struct nam people5;
	
	strcpy(people1.name , "ö��");
	strcpy(people2.name,  "����");
	strcpy(people3.name,  "����");
	strcpy(people4.name,  "����");
	strcpy(people5.name,  "����");


	strcpy(people1.sex, "����");
	strcpy(people2.sex, "����");
	strcpy(people3.sex, "����");
	strcpy(people4.sex, "����");
	strcpy(people5.sex, "����");


	people1.age = 20;
	people2.age = 30;
	people3.age = 25;
	people4.age = 22;
	people5.age = 21;

	/*
	people1.phoneNum = 01054563333;
	people2.phoneNum = 01054562222;
	people3.phoneNum = 01054561111;
	people4.phoneNum = 01054567777;
	people5.phoneNum = 01065465555;
	*/

	people1.phoneNum = 6546555;
	people2.phoneNum = 6515555;
	people3.phoneNum = 3215555;
	people4.phoneNum = 3215555;
	people5.phoneNum = 3214231;



	print_stru(people1);
	print_stru(people2);
	print_stru(people3);
	print_stru(people4);
	print_stru(people5);


	return 0;

}