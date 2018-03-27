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
	virtual void CalcFare() = 0; //���� ����
	int GetFare() //��� ���
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
		cout << "���̸� �Է��ϼ���";
		cin >> nAge;

		if (nAge < 8)
		{
			person = new CBaby; // ������ �ڵ��� ��� �� �ڵ尡 ���� ������ ����

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
		cout << person->GetFare() << "��" << endl;
	}

	for (auto person : aryList)
	{
		delete person;
	}


}