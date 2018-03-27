#include<iostream>
using namespace std;
#define DEFAULT_FARE 10000

class CPerson
{
protected:
	int fare;

public:
	CPerson() {}
	virtual ~CPerson() {}
	virtual void CalcFare() = 0; //순수 가상
	int GetFare() //요금 출력
	{
		return fare;
	}

};


class CBaby :public CPerson
{

	virtual void CalcFare()
	{
		fare = 0;
	}

};

class CChild :public CPerson
{
	virtual void CalcFare()
	{
		fare = DEFAULT_FARE*0.3;
	}

};

class CTeen :public CPerson
{
	virtual void CalcFare()
	{
		fare = DEFAULT_FARE * 0.5;
	}
};

class CAdult :public CPerson
{
	virtual void CalcFare()
	{
		fare = DEFAULT_FARE * 1;
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
			person = new CBaby; // 복잡한 코드일 경우 위 코드가 좀더 빠르게 동작

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

		person->CalcFare();


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