#include<stdio.h>

int main()
{
	int num = 0, primeNum = 0, i = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);


	for (i = 2; i <= num; i++)
	{
		if (num%i == 0)
		{
			if (num == i)
			{
				printf("�Ҽ� �Դϴ�");


			}
			else
			{

				printf("�Ҽ��� �ƴմϴ�.");

			}



			break;

		}
	}



	//for (int i = 2; i <= num; i++)
	//{
	//	if (num &i == 0)
	//	{
	//		(num == i) ? printf("�Ҽ��Դϴ�") : printf("�Ҽ��� �ƴմϴ�.");
	//		break;

	//	}
	//}

	//return 0;

}