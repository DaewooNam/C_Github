#include<iostream>

void swap(int &a, int&b);

int main(void)
{
	int a = 10;
	int b = 20;
	
	
	swap(a, b);


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	


}

void swap(int &a, int&b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;



}