#include<iostream>



int main(void)
{
	
	//���� ���� ���(pointer�μ� �ν�)
	int nData = 10;
	int &ref = nData; // &���� ������ �ִ��� ������ �ִ��� ���� =>&ref = 20 ���� 

	ref = 20;

	//std::cout << nData << std::endl;

	int *pref = &nData; // �� ����� ���� C++���� ���� ������ ���� ���
	*pref = 30;
	//std::cout << nData << std::endl;

	int a = 10;
	int b(a); // b= 10 C++������ �������鵵 �Լ�ó�� ����� ����(��ü ����) (��ü ������ ��� ������ �Լ��� ����ϰ� �ȴ�.)
	auto c(b); // b type and ���� �����ϰ� �ȴ�. 

	std::cout << a << b << c << std::endl;

	int aint[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{

		std::cout << aint[i] << " ";

	}
	std::cout << std::endl;
	
	
	
	for (auto n : aint) //for(auto n : array)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;


	for (auto &n : aint) //for(auto &n : array) pointer ����Ŵ(���� ����Ǵ°� �ƴ� )
	{
	
		std::cout << n << " ";
		n++;
	}
	std::cout << std::endl;


	for (auto n : aint) //for(auto n : array)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
	

	int intary[3][4] = {
				{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12} };
	
	for(auto &n : intary) //�� ������ �ϱ� 
	{
		for (auto &m : n)
		{
			std::cout << m << std::endl;
		}
		}
		


	return 0;

}