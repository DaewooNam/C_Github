#include<iostream>

using namespace std;

class Car
{
protected:
	int gasolineGauge = 100;
public:
	int GetGasGauge()
	{
		return gasolineGauge;
	}

};

class HybridCar : public Car
{
protected:
	int electricGauge = 200;
public:
	int GetElecGauge()
	{
		return electricGauge;
	}
};


class HybridWaterCar : public HybridCar
{
private:
	int waterGauge = 300;
public:
	int GetWaterGauge()
	{
		return waterGauge;
	}


	void showCurrentGauge()
	{
		cout << "�ܿ� ���ָ�" << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ" << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�" << GetWaterGauge() << endl;

	}
};



int main(void)
{
	Car MyCar_Gasolin;
	HybridCar MyCar_HybirdCar;
	HybridWaterCar MyCar_HybirdWaterCar;

	MyCar_HybirdWaterCar.showCurrentGauge();


	return 0;
}