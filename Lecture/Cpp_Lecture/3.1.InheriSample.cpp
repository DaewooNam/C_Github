#include<iostream>


using namespace std;

class CMyData // �θ�
{
private : //���� ���� ������
	int m_nData = 0;

public :
	CMyData() {	cout << "CMyData()" << endl;} //�̰� ���� Ȯ��..
	~CMyData() { cout << "~CMyData()" << endl; }

	int GetData(void)
	{
		return m_nData;
	}

	void SetData(int nParam)
	{

		m_nData = nParam;
	}
	
protected : //�ڽ� Ŭ�������� ��� ����
	void PrintData() { cout << "PrintData"<<m_nData << endl; }



};

class CMyDataEx:public CMyData //�ڽ�
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

