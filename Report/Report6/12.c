#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void set(int h, int m);
void move(void);
void show(void);


int hour = 0, min = 0;
int flag = 0;
int inTime = 0;


int main(void)
{


	set(hour, min);
	printf("������ �ð� : ");
	show();
	printf("\n��� �ð� �Է�(��): ");
	scanf("%d",&inTime);
	move();
	printf("���� �ð� : ");
	show();



	return 0;
}


void set(int h, int m)
{
	hour = h;
	min = m;

	printf("���� �ð��� �� �Է�(24�ð�):");
	scanf("%d %d", &hour, &min);


	if ((hour >= 12) && (hour<23))
	{
		if (hour == 12)
		{
			hour = hour;
		}
		else
		{
			hour -= 12;

		}

		flag = 1; //���� 

	}
	else 	
	{
		
		if (hour == 24)
		{

			hour -= 24;
		}
		else
		{
			hour = hour;

		}
		
		
		flag = 0; // ����
	}

	

}




void show(void)
{
	if (flag == 0)// ����
	{

		if (hour < 10)
		{

			if (min < 10)
			{
				printf("0%d:0%d(AM)", hour, min);
			}
			else
			{
				printf("0%d:%d(AM)", hour, min);
			}

		}
		else
		{
			if (min < 10)
			{
				printf("%d:0%d(AM)", hour, min);
			}
			else
			{
				printf("%d:%d(AM)", hour, min);
			}


		}




	}
	else
	{

		if (hour < 10)
		{

			if (min < 10)
			{
				printf("0%d:0%d(PM)", hour, min);
			}
			else
			{
				printf("0%d:%d(PM)", hour, min);
			}

		}
		else
		{
			if (min < 10)
			{
				printf("%d:0%d(PM)", hour, min);
			}
			else
			{
				printf("%d:%d(PM)", hour, min);
			}


		}
		

	}
	printf("flag : %d", flag);
}



void move(void)
{
	

	for (int i = 0;i<inTime;i++)
	{
		min += 1; // 1�о� ����

		if (min == 60)
		{
			hour += 1;
			min   = 0;

		}
		else if (hour == 12)
		{

			if (flag == 0)
			{
				hour = 12; // ���� 12�� ��ȭ

			}
			else
			{

				hour = 0; // ���� 00�� ��ȭ
		

			}
		}




	}

	if ((hour >= 12) && (hour<23))
	{
		

		flag = 1; //���� 

	}
	else
	{
		if (hour == 24)
		{

			hour -= 24;
		}
		else
		{
			hour = hour;

		}

		
		flag = 0; // ����
	}





	


}

