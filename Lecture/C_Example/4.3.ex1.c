#include<stdio.h>


int main(void)
{
	int grade = 0, condition1 =0, var1 = 0, var2 = 0, var3 = 0, var4 = 0;


	printf("성적을 입력하세요:");
	scanf_s("%d", &grade);

	condition1 = 90 <= grade;

	switch (grade)
	{
	case 100/9: 



	}

	
	
	
	
	condition2 = 80 <= grade < 90;

	condition3 = 70 <= grade < 80;

	condition4 = 70 <= grade < 60;

	switch (grade)
	{
	case 90:

		printf("A");
		break;
	
	case 80:

		printf("A");
		break;

	case 70:

		printf("C");
		break;

	case 60:

		printf("D");
		break;
		
		
	}


	return 0;


}
