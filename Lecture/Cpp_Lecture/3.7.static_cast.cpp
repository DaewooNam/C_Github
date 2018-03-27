#include<iostream>

using namespace std;

class CMyData
{

private:
	int m_nData = 0;

public :
	CMyData() {}
	virtual ~CMyData(){}
	void SetData(int nParam) { m_nData = nParam; }
	int GetData() { return m_nData; }

};


class CMyDataEx:public CMyData
{

private:
	int data = 10;

public:
	
	
	void SetData(int nParam) 
	{ 
		if (nParam > 10)
		{
			nParam = 10;

		}
		CMyData::SetData(nParam);
	}
	
	/*
	void PrintData()
	{

		cout << "PrintData" << GetData() << endl;
	}
	*/
	friend void PrintData(CMyDataEx&); //안으로 들어가서 사용할 수 있음 get,set 을 통해서 값을 출력할 수도 있다.
	//void PrintData(CMyDataEx&);

};


void PrintData(CMyDataEx &cmy)
{

	cout << cmy.data  << endl;
}

int main()
{

	
	CMyData *pData = new CMyDataEx; 
	CMyDataEx *pDataEx;
	//class 형 변환
	/*
	pData->SetData(20);
	
	pDataEx = static_cast<CMyDataEx*>(pData); // 강제 형변환 암기
	pDataEx->PrintData();
	pData->SetData(20);
	pDataEx->PrintData();


	delete pData;
	*/

	return 0;

}