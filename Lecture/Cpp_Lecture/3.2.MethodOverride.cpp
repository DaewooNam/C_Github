#include<iostream>

using namespace std;
class CMyData
{
private :
	int m_nData;
public :
	int GetData(void) const 
	{
		//m_nData = 10; =>(m_nData 값이 변화하지 않게 함)
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

	CMyData *c = new CMyDataEx; //헷갈리기 시작함(자주 사용)
	//	CMyDataEx *c = new CMyData; //자식에 부모 값을 할당 할 수 없음
	c->SetData(-10);
	cout << c->GetData() << endl;

 //헷갈리기 시작함(자주 사용)
	c->SetData(-10);
	cout << c->GetData() << endl;


	return 0;
}