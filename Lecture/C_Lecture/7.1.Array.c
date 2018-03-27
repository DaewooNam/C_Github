#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main (void)
{

	char arrayCh[6] = {'a','p','p' ,'l' ,'e','\0' };
	char arrayCh2[6] =  "apple" ;
	
	char src[30]="beautiful";
	char desc[20];


	src[30] = "beautiful";
	printf("%s\n", src);
	


	/*
	strcpy(src,"beautiful");
	strcpy(desc, src);


	printf("%s\n", src);
	printf("%s\n", desc);


	
	
	for (int i=0;i<5;i++)
	{
		printf("%c ", arrayCh[i]);

	}
		

	//printf("%s\n",arrayCh);
	//printf("%s\n", arrayCh2);



	return 0;
	*/
}