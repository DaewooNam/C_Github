#include<stdio.h>

int main(void)
{
	int answer = 0, num=0;


	printf("������ �Է��Ͻÿ� : ");

	scanf_s("%d", &answer);
	

	if ((1 < answer) && (answer < 30))
	{

		
		while (1)
		{


			printf("���� �Է� (1���� 30����): ");

			scanf_s("%d", &num);


			if (num < answer)
			{
				printf("%d���� Ů�ϴ�.\n", num);

			}


			else if (num > answer)
			{
				printf("%d���� �۽��ϴ�.\n", num);

			}


			else if(num == answer)
			{
				printf("�����Դϴ�.\n");

				break;
			}
		}
	
	
	
	}
	else
	{
		printf("Error");
	}


	return 0;

}