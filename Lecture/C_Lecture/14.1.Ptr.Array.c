#include<stdio.h>


int main(void)
{
	//������ �迭

	
	/*
	char pary[5];

	
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	*/

	char* pary[5];
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";


	printf("%u\n", pary[1]);
	printf("%u\n", pary[1]+1);

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
		printf("%u\n", pary[i]);
	}


	printf("%c\n", (pary[1] + 1));
	printf("%c\n", pary[1][1]);


	// �����Ϳ��ٰ� 


	return 0;
}