#include<stdio.h>
int count_num(int(* ary1)[4], int(* ary2)[4],int(* ary3)[2]);

int main(void)
{
	int ary1[3][4] = {
	{15,3,9,11},
	{23,7,10,12},
	{0,17,55,24}
	};





	int ary2[3][4] = {
	{ 13,8,9,15 },
	{ 23,0,10,11 },
	{ 29,17,43,3 }
	};


	int same_num[12][2] = {0,};
	int i = 0, dup_cnt = 0;

	dup_cnt = count_num(ary1,ary2,same_num);
	printf("위치 및 일치 하는 번호의 수 : %d\n",dup_cnt);
	printf("배열에서의 위치(행,열) \n");



	for (int i=0;i<dup_cnt;i++)
	{

		printf("(%d, %d)\n",same_num[i][0],same_num[i][1]);

	}


	return 0;
}


int count_num(int(* ary1)[4], int(* ary2)[4], int(* ary3)[2])
{
	int temp_ary1[12];
	int temp_ary2[12];
	int cnt = 0;
	int place[12] = {0,};
	int dup_cnt = 0;
	int row = 0, col = 0;


	// 2차 배열을 1차 배열로 나열
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			temp_ary1[(i*4)+j] = ary1[i][j];

		}

		
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			temp_ary2[(i * 4) + j] = ary2[i][j];

		}


	}

	// 중복된 숫자 확인
	for (int i =0;i<12;i++)
	{
		for (int j = 0; j < 12; j++)
		{

			if (temp_ary1[i] == temp_ary2[j])
			{
				cnt++;

			}
			
			
			if ((temp_ary1[i] == temp_ary2[j]) && (i==j))
			{
				
				place[dup_cnt] = i;
				dup_cnt++;
				
			}


		}

	}

	


	

	for (int i=0;i<dup_cnt;i++)
	{

		// ary 값을 행렬 좌표로 변환
		row = place[i] / 4;
		col = place[i] % 4;

		

		ary3[i][0] = row;
		ary3[i][1] = col;
	}
	


	return dup_cnt;
	
}