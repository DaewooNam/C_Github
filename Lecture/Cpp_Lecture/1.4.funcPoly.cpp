#include<iostream>
using namespace std;
int add(int);
int add(int, int);
int add(double, double);
//double add(double, double); // output�� �ٸ��ٰ� �ص� �� ���� ��ġ �Ѵ�.
//�Լ��� �پ缺 input ���� ���ؼ� �� �Լ����� �������� �� �ִ�. 

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