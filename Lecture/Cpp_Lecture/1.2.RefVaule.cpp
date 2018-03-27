#include<iostream>



int main(void)
{
	
	//참조 변수 사용(pointer로서 인식)
	int nData = 10;
	int &ref = nData; // &값이 우측에 있는지 좌측에 있는지 구분 =>&ref = 20 오류 

	ref = 20;

	//std::cout << nData << std::endl;

	int *pref = &nData; // 위 내용과 동일 C++에서 참조 변수를 많이 사용
	*pref = 30;
	//std::cout << nData << std::endl;

	int a = 10;
	int b(a); // b= 10 C++에서는 변수값들도 함수처럼 사용이 가능(객체 지향) (객체 지향은 모든 값들을 함수로 사용하게 된다.)
	auto c(b); // b type and 값을 복사하게 된다. 

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


	for (auto &n : aint) //for(auto &n : array) pointer 가리킴(값이 복사되는게 아님 )
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
	
	for(auto &n : intary) //이 형식은 암기 
	{
		for (auto &m : n)
		{
			std::cout << m << std::endl;
		}
		}
		


	return 0;

}