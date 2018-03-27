#include<iostream>
using namespace std;

class CAR
{
private :
	int &curSpd;
	int maxSpeed = 100;
	int gasGauge = 40;

public :
	
	CAR(int &inputSpd)
		:curSpd(inputSpd) //참조변수 초기화 필수
	{

	};


	void printSpeed()
	{
		cout << "최고속도 : "<<maxSpeed << endl;
		cout << "현재속도 : "<<curSpd << endl;
	}

	void Break()
	{
		curSpd = curSpd - 30;
		
		cout <<"브레이크 ! "<< endl;

	}

};



int main(void)
{
	int curSpd = 100;
	CAR mycar(curSpd);

	mycar.printSpeed();
	mycar.Break();
	mycar.printSpeed();
	curSpd = 80;
	mycar.printSpeed();





	return 0;
}