#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


using namespace std;


int main(void)
{

	int *p    = new int(3); //���� �Ҵ�(�ּҰ� �Ҵ� )C++���� �ʱ�ȭ ����
	int *pary = new int[3]; // array ���� sizeof ������ ����� �� �ʿ䰡 ����.



	pary[0] = 1;
	pary[1] = 2;
	pary[2] = 3;

	cout << *p<<endl;;
	cout << pary[0] << " " << pary[1] << " " << pary[2]<<endl;



	delete[]pary; //delete pary;  �迭�� ���� ���� �迭�� ����
	delete p;

	return 0;


}