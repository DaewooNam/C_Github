#include<iostream>

using namespace std;
class CMyData
{
private :
	int m_nData;
public :
	int GetData(void) const 
	{
		//m_nData = 10; =>(m_nData ���� ��ȭ���� �ʰ� ��)
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}

};

class CMyDataEx : public CMyData
{
public:
	CMyData data;
	
	

	void SetData(int nParam) //Override
	{
		if (nParam<0)
		{
			CMyData::SetData(0);
		}

		if (nParam > 10)
		{
			CMyData::SetData(10);
		}

		
	}

};


int main(void)
{
	CMyData *a = new CMyData;
	a->SetData(-10);
	cout << a->GetData()<< endl;
	
	CMyDataEx *b = new CMyDataEx;
	b->SetData(-10);
	cout << b->GetData()<< endl;

	CMyData *c = new CMyDataEx; //�򰥸��� ������(���� ���)
	//	CMyDataEx *c = new CMyData; //�ڽĿ� �θ� ���� �Ҵ� �� �� ����
	c->SetData(-10);
	cout << c->GetData() << endl;

 //�򰥸��� ������(���� ���)
	c->SetData(-10);
	cout << c->GetData() << endl;


	return 0;
}