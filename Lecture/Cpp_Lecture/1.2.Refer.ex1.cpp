#include<iostream>



int main(void)
{
	int *score = new int[3];
	int sum = 0;


		
	for (int i = 0; i < 3; i++)
	{
		std::cout << "���� �Է��ϼ��� :" << std::endl;
		std::cin >> score[i];
		sum += score[i];


	}



	
	std::cout << "�� : "<<sum/3 << std::endl;

	
	delete[]score;


	




}