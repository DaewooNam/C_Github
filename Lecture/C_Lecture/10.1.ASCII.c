
#include<stdio.h>


int main(void)
{
	int ch;

	printf("a = %d\t", 'a');
	printf("%c\n", 97);
	printf("size = %d\n", sizeof('a'));

	ch = 'a';
	ch++;

	printf("%c, %d\n", ch,ch);

	char ch1 = 'D';
	char small;

	if ((ch1 > 'A')&&(ch1<='Z'))
	{

		small = ch1 + ('a' - 'A');

	}
	else
	{
		printf("���� �빮�ڸ� �Է��Ͻÿ�.\n");
		
	}


	printf("%c,\t%c \n",ch1,small);


	return 0;

}
