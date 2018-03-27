#include<iostream>
using namespace std;

class CAR
{
	int gasGauge = 0;
	int maxSpeed = 200;
	int maxGas = 60;
	

public:

	CAR() : maxGas(60) {} //생성자
	CAR(int _maxSpeed)
		:maxSpeed(_maxSpeed)
	{}
	CAR(int _maxSpeed ,int _maxGas)
		//: maxSpeed(_maxSpeed),maxGas(_maxGas)
		:CAR(_maxSpeed) //중복시 위와 같이 사용
	{}
	
	
	
	
	
	
	~CAR(){} //소멸자
	
	






	void inputgas(int x)
	{
		gasGauge = x;
		
		
		if (gasGauge > maxGas)
		{
			std::cout << "Gas Over" << std::endl;
		}
		else
		{
			std::cout << "Current Gas : "<<gasGauge << std::endl;
		}

	}


};




int main(void)
{
	CAR mycar;


	mycar.inputgas(100);
	
	


	return 0;
}