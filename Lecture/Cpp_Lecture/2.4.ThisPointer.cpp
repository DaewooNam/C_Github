#include<iostream>

using namespace std;

class CData
{

	int m_nData;

public: 
	CData(int nParam) : m_nData(nParam) {}

	void PrintData()
	{
		int m_nData = 100; // �̶� m_nData ���� �ٽ� �ʱ�ȭ ��.
		
		cout << m_nData << endl;
		cout << CData::m_nData << endl;
		cout << this->m_nData << endl; //dataA or dataB ���� ��Ÿ�� main �Լ����� ���� �����ؾ� this ���� �Ҵ��
		cout << this->CData::m_nData << endl; // this Pointer �� ��Ÿ���� �����ϹǷ� �ַ� ���� but ������ ���� ��Ÿ���� �����(���)

	}

};



int main(void)
{
	CData dataA(10), dataB(20);
	
	dataA.PrintData();
	dataB.PrintData();


	return 0;
}