#include<iostream>

using namespace std;
void Swap(int &ra, int &rb);

int main(void)
{
	int a = 10;
	int b = 20;

	int &ra(a);
	int &rb(b);

	cout << "a=" << ra << endl;
	cout << "b=" << rb << endl;

	
	Swap(ra, rb);
	cout << "a=" << ra << endl;
	cout << "b=" << rb << endl;



	return 0;
}


void Swap(int &ra, int &rb)
{
	int temp = 0;

	temp = ra;
	ra = rb;
	rb = temp;

}
