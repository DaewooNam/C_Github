#include<iostream>


using namespace std;

class CMyData // 부모
{
private : //접근 제어 지시자
	int m_nData = 0;

public :
	CMyData() {	cout << "CMyData()" << endl;} //이게 뭐지 확인..
	~CMyData() { cout << "~CMyData()" << endl; }

	int GetData(void)
	{
		return m_nData;
	}

	void SetData(int nParam)
	{

		m_nData = nParam;
	}
	
protected : //자식 클래스에서 사용 가능
	void PrintData() { cout << "PrintData"<<m_nData << endl; }



};

class CMyDataEx:public CMyData //자식
{
public : 
	CMyDataEx() { cout << "CMydataex()" << endl; }
	~CMyDataEx() { cout << "~CMydataex()" << endl; }

	void Testfunc()
	{
		PrintData();
		SetData(10);
		cout << "GetData : " << GetData() << endl;
	}


};



int main(void)
{
	CMyDataEx data;

	data.SetData(20);
	cout << "GetData : " << data.GetData() << endl;
	//data.PrintData();
	data.Testfunc();


	return 0;
}

