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
		:curSpd(inputSpd), gasGauge(inputGas) //�������� �ʱ�ȭ �ʼ�
	{

	};

	
	void printSpeed()
	{
		//cout << "�ְ�ӵ� : " << maxSpeed << endl;
		cout << "����ӵ� : " << curSpd << endl;
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
			cout << "������ �����մϴ�" << endl;
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


class SuperCar :public CAR // Protected ��� ����
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

			cout << "Booster�� ����� �� �����ϴ�." << endl;
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
			cout << "gas ���Է��� �����ϴ�." << endl;
			cout << "���԰��ɷ���"<<emptyGas << endl;


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
			cout << "�⸧�� �����մϴ�" << endl;
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