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
	printf("설정된 시간 : ");
	show();
	printf("\n경과 시간 입력(분): ");
	scanf("%d",&inTime);
	move();
	printf("현재 시간 : ");
	show();



	return 0;
}


void set(int h, int m)
{
	hour = h;
	min = m;

	printf("최초 시간과 분 입력(24시간):");
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

		flag = 1; //오후 

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
		
		
		flag = 0; // 오전
	}

	

}




void show(void)
{
	if (flag == 0)// 오전
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
		min += 1; // 1분씩 증가

		if (min == 60)
		{
			hour += 1;
			min   = 0;

		}
		else if (hour == 12)
		{

			if (flag == 0)
			{
				hour = 12; // 오후 12시 변화

			}
			else
			{

				hour = 0; // 오전 00시 변화
		

			}
		}




	}

	if ((hour >= 12) && (hour<23))
	{
		

		flag = 1; //오후 

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

		
		flag = 0; // 오전
	}





	


}

