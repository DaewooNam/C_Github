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
		:curSpd(inputSpd) //�������� �ʱ�ȭ �ʼ�
	{

	};


	void printSpeed()
	{
		cout << "�ְ�ӵ� : "<<maxSpeed << endl;
		cout << "����ӵ� : "<<curSpd << endl;
	}

	void Break()
	{
		curSpd = curSpd - 30;
		
		cout <<"�극��ũ ! "<< endl;

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