#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void swap(char *pstr1, char *pstr2);
void line_up(char *maxp, char *midp, char *minp);


int main(void)
{

	char str1[100];
	char str2[100];
	char str3[100];
	
	
	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);

	//값을 스위치 

	line_up(str1, str2, str3);

	printf("%s %s %s",str1,str2,str3);







	

	return 0;
}



void swap(char *pstr1, char *pstr2)
{
	char temp[100];
	strcpy(temp, pstr1);
	strcpy(pstr1, pstr2);
	strcpy(pstr2, temp);




	return;
}




void line_up(char *maxp, char *midp, char *minp){
	

	if (strcmp(maxp, midp)>0)
	{
		swap(maxp, midp);

		
	}

	if (strcmp(midp, minp)>0)
	{
		swap(midp, minp);

		

	}

	if (strcmp(maxp, minp)>0)
	{
		swap(maxp, minp);
		
	}



	return;
}