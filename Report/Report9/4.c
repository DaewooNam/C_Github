#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{

	char name[30];
	double weight = 0, tall =0, bmi = 0;

	FILE *pf = fopen("a.txt","r");
	FILE *pf2 = fopen("b.txt","w");

	fscanf(pf,"%s %lf %lf",name,&weight,&tall);

	

	bmi = weight / (tall*tall*0.01*.01);


	fprintf(pf2,"�̸� : %s, BMI : %.1f\n",name,bmi);
	fprintf(pf2, "ü�� : %.1fkg, Ű : %.1fcm", weight, tall);




	printf("%s %.1f %.1f", name, weight, tall);

	fclose(pf);
	fclose(pf2);

	
	return 0;

}