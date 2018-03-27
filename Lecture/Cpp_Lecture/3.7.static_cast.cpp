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
	friend void PrintData(CMyDataEx&); //������ ���� ����� �� ���� get,set �� ���ؼ� ���� ����� ���� �ִ�.
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
	//class �� ��ȯ
	/*
	pData->SetData(20);
	
	pDataEx = static_cast<CMyDataEx*>(pData); // ���� ����ȯ �ϱ�
	pDataEx->PrintData();
	pData->SetData(20);
	pDataEx->PrintData();


	delete pData;
	*/

	return 0;

}