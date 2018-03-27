#include<iostream>
using namespace std;



class CMyData
{
protected:
	int m_nData = 10;

public:
	CMyData() { cout << "CMyData()" << endl; }
	CMyData(int nParam) { cout << "CMyData(int)" << endl; }
	CMyData(double nParam) { cout << "CMyData(double)" << endl; }

	//virtual void printData(void)
	void printData(void)
	{
		cout << "CMydata : " << m_nData << endl;
	}


};

class CMyDataEx : public CMyData
{

public:
	CMyDataEx() : CMyData() // 우측 먼저 그리고 좌측 값 출력
	{ cout << "CMyDataEx()" << endl; }
	CMyDataEx(int nParam) :CMyData(nParam)
	{ cout << "CMyDataEx(int)" << endl; }
	CMyDataEx(double dnParam) : CMyData(dnParam)
	{ cout << "CMyDataEx(double)" << endl; }

	//virtual void printData(void)

	void printData(void)
	{
		cout << "CMydataEx : " << m_nData*2 << endl;
	}

	void TestFunc()
	{		
		cout << "CMydata TestFunc"  << endl;
		printData();
	}

};


int main(void)
{

	CMyDataEx a;
	a.printData();//intstance

	//CMyData &b=a; //CMydata *b = new CmyDataEx; &(참조변수)
	CMyData b;

	b.printData();

	a.TestFunc();

	return 0;
}