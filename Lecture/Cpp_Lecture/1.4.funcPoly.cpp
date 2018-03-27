#include<iostream>
using namespace std;
int add(int);
int add(int, int);
int add(double, double);
//double add(double, double); // output이 다르다고 해도 위 값은 일치 한다.
//함수의 다양성 input 값을 비교해서 각 함수들을 구분지을 수 있다. 

int main(void)
{
	cout << add(3, 5) << endl;
	cout << add(3.1, 5.2) << endl;
	cout << add(3) << endl;

	return 0;

}

int add(int x)
{
	return x;

}


int add(int x, int y)
{

	return x + y;
}


int add(double x, double y)
{
	return x + y;
}