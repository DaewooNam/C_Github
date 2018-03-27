#include<iostream>
using namespace std;


class CAR
{
private:
	int &curSpd;
	int maxSpeed = 100;
	int &gasGauge;
protected:
	int gas=60;


public:
	
	CAR(int &inputSpd, int& inputGas)
		:curSpd(inputSpd), gasGauge(inputGas) //참조변수 초기화 필수
	{

	};

	
	void printSpeed()
	{
		//cout << "최고속도 : " << maxSpeed << endl;
		cout << "현재속도 : " << curSpd << endl;
		cout << "GasGauge : " << gasGauge << endl;
	}

	void Break()
	{

		if (curSpd > 80)
		{
			curSpd = curSpd - 10;

		}
		else
		{
			curSpd = curSpd - 5;

		}



		cout << "Break ! " << endl;

	}

	void Accele()
	{

		cout << "Accele ! " << endl;

		if (gasGauge >= 5)
		{
			curSpd = curSpd + 10;
			gasGauge -= 5;

		}
		else
		{
			curSpd = 0;
			cout << "가스가 부족합니다" << endl;
		}


	}



	//curSpd



	void SetData_curSpd(int _nParam)
	{

		curSpd = _nParam;

	}

	int GetData_curSpd(void)
	{

		return curSpd;
	}




};


class SuperCar :public CAR // Protected 사용 가능
{
private:
	int flag = 0;

public:

	void Booster(void)
	{
		if ((flag == 0) && (gas > 20))
		{

			SetData_curSpd(GetData_curSpd() + 50);
			gas -= 20;

			flag = 1;
		}
		else
		{

			cout << "Booster를 사용할 수 없습니다." << endl;
		}


	}

	void Charge(int _gas)
	{
		int emptyGas = (60 - gas);
		
		if (emptyGas>= _gas)
		{

			gas = gas + _gas;

		}
		else
		{
			cout << "gas 주입량이 많습니다." << endl;
			cout << "주입가능량은"<<emptyGas << endl;


		}
		
	}

	void Accele(void)
	{
		if (gas >= 10)
		{
			if ((GetData_curSpd() + 30) <= 100)
			{
				SetData_curSpd(GetData_curSpd() + 30);
				gas -= 10;

			}
			else
			{
				SetData_curSpd(100);
				gas -= 10;

			}

		}
		else
		{
			SetData_curSpd(0);
			cout << "기름이 부족합니다" << endl;
		}

	}




};




int main(void)
{
	int inputSpd = 100;
	int inputGas = 40;
	CAR *a = new CAR(inputGas,inputSpd);
	SuperCar data();

	


	return 0;
}