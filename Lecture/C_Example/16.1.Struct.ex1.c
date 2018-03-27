#include<stdio.h>


struct person
{
	int grade;
	double avg;
};



int main(void)
{
	double max = 0.0;
	int    place = -1;
	struct person s[3];

	s[0].grade = 1000;
	s[0].avg = 4.5;

	

	s[1].grade = 2000;
	s[1].avg = 4.0;

	s[2].grade = 3000;
	s[2].avg = 3.2;



	for (int i =0;i<3;i++)
	{

		if (s[i].avg > max)
		{
			max = s[i].avg;

			place = i;


		}
		
	}


	printf("ÇÐÁ¡ : %d\n", s[place].grade);
	printf("Æò±Õ : %.1f", s[place].avg);


}