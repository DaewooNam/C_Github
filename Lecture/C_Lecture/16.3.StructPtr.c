#include<stdio.h>

//typedef struct score // �̶� score ���� ��� ���� �ʾƵ� ��
typedef struct 
{
	int kor;
	int eng;
	int mat;
}_score; // _score ������ ��ü �ؼ� ��� ����(��κ� �� ������ ������ ��)

int main(void)
{
	_score daewoo = {100,50,80};
	typedef int BYTE4; // typedef ���� ���
	
	BYTE4 a = 10;


	printf("%d\n",daewoo.kor);


	return 0;
}