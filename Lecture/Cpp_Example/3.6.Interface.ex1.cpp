#include<iostream>
using namespace std;
#define DEFAULT_FARE 10000

class CPerson
{
protected :
	double fare;
	
	//func1 calcfare
	//fucn2 getfare

public:


	double CalcFare(int perAge); //요금 확인
	void   GetFare(int perAge);  //요금 출력

};

double CPerson::CalcFare(int perAge)
{

	if (perAge < 8)
	{

		fare = DEFAULT_FARE * 0;

		return fare;
	}
	else if (perAge < 14)
	{
		fare = DEFAULT_FARE * 0.7;
		return fare;

	}
	else if (perAge < 20)
	{
		fare = DEFAULT_FARE * 0.5;
		return fare;

	}
	else
	{
		fare = DEFAULT_FARE * 1;
		return fare;
	}

}

void  CPerson::GetFare(int perAge)
{
	if (perAge < 8)
	{

		cout << CalcFare(perAge) << endl;

	}
	else if (perAge < 14)
	{
		cout << CalcFare(perAge) << endl;

	}
	else if (perAge < 20)
	{
		cout << CalcFare(perAge) << endl;

	}
	else
	{
		cout << CalcFare(perAge) << endl;
	}
}



class CBaby :public CPerson
{
protected:

	CalcFare()

};

class CChild :public CPerson
{
	double CalcFare(int perAge)
	{
		return fare;
	}
};

class CTeen :public CPerson
{
	double CalcFare(int perAge)
	{
		return fare;
	}
};

class CAdult :public CPerson
{
	double CalcFare(int perAge)
	{
		return fare;
	}
};



int main(void)
{
	CPerson *aryList[3] = { 0, };
	int nAge = 0;

	for (auto &person : aryList)
	{
		cout << "나이를 입력하세요";
		cin >> nAge;

		if (nAge < 8)
		{
			person = new CBaby; // %0

		}
		else if (nAge < 14)
		{
			person = new CChild; // %30

		}
		else if (nAge < 20)
		{
			person = new CTeen; // %50

		}
		else
		{
			person = new CAdult; // %100
		}

		person->CalcFare(nAge);


	}

	for (auto person : aryList)
	{
		cout << person->GetFare() << "원" << endl;
	}

	for (auto person : aryList)
	{
		delete person;
	}


}