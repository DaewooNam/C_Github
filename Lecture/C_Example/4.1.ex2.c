#include<stdio.h>


int main()
{

	int value;
	printf("°ªÀ» ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf_s("%d", &value);



	//if (value % 2 == 0)
	//{
	//	printf("Â¦¼ö");
	//}

	//else
	//{
	//	printf("È¦¼ö");
	//}


	
	value % 2 == 0 ? printf("Â¦¼ö") : printf("È¦¼ö");



}