#include<stdio.h>
int count_num(int(*ary1)[4], int(*ary2)[4], int(*ary3)[2]);

int main(void)
{
	int ary1[3][4] = {
		{ 15,3,9,11 },
	{ 23,7,10,12 },
	{ 0,17,55,24 }
	};



	int(*pary)[4] = ary1;


	printf("%d", (*pary)[11]);


	/*
	int ary2[3][4] = {
	{ 13,8,9,15 },
	{ 23,0,10,11 },
	{ 29,17,43,3 }
	};


	int same_num[12][2] = { 0, };
	int i = 0, dup_cnt = 0;

	dup_cnt = count_num(ary1, ary2, same_num);
	printf("위치 및 일치 하는 번호의 수 : %d\n", dup_cnt);
	printf("배열에서의 위치(행,열) \n");



	for (int i = 0; i<dup_cnt; i++)
	{

	printf("(%d, %d)\n", same_num[i][0], same_num[i][1]);

	}
	*/

	return 0;
}


int count_num(int(*ary1)[4], int(*ary2)[4], int(*ary3)[2])
{
	//int temp_ary1[12];    위와 같이 배영을 이용하면 오래 걸림  
	int (*pary1)[4] = ary1; //배열 포인트를 잡아준다!
	int (*pary2)[4] = ary2;
	int cnt = 0;
	int place[10] = 0;


	for (int i=0;i<12;i++)
	{
		for (int j = 0; j < 12; j++)
		{

			if ((*pary1[i] == *pary2[j]) && (i == j))
			{
				
				place[cnt] = i;
				cnt++;
				
			}

		}
		
	}



	return 0;
}