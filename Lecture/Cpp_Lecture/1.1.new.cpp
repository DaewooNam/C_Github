#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


using namespace std;


int main(void)
{

	int *p    = new int(3); //동적 할당(주소값 할당 )C++에서 초기화 가능
	int *pary = new int[3]; // array 값을 sizeof 값으로 계산해 줄 필요가 없다.



	pary[0] = 1;
	pary[1] = 2;
	pary[2] = 3;

	cout << *p<<endl;;
	cout << pary[0] << " " << pary[1] << " " << pary[2]<<endl;



	delete[]pary; //delete pary;  배열로 만든 값은 배열로 제거
	delete p;

	return 0;


}