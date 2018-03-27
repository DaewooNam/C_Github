#include<stdio.h>

//typedef struct score // 이때 score 값을 사용 하지 않아도 됨
typedef struct 
{
	int kor;
	int eng;
	int mat;
}_score; // _score 값으로 대체 해서 사용 가능(대부분 이 구조를 따르게 됨)

int main(void)
{
	_score daewoo = {100,50,80};
	typedef int BYTE4; // typedef 많이 사용
	
	BYTE4 a = 10;


	printf("%d\n",daewoo.kor);


	return 0;
}