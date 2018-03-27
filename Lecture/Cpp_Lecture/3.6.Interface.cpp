#include<iostream>
using namespace std;


class CMyObject
{
public:
	CMyObject() {}
	virtual ~CMyObject() {}

	//virtual int GetData() = 0;
	virtual int GetID() = 0;

protected:
	int m_nData = 10;

};

/*
void printData(CMyObject *pObj) //�Լ�
{
	cout << pObj->GetData() << endl;

}
*/

void printData(CMyObject *pObj) //�Լ�
{
	switch (pObj->GetID())
	{
	case 1:

		cout << "TV �Դϴ�" << endl;
		break;
	case 2:

		cout << "Raido �Դϴ�" << endl;
		break;
	case 3:

		cout << "Cleaner �Դϴ�" << endl;
		break;

	}

}





class CMyPow : public CMyObject
{

	virtual int GetData()
	{
		return m_nData * m_nData;

	}
};

class CMyGCP : public CMyObject
{

	virtual int GetDat()
	{
		int cnt = 0;
		for (int i = 1; i <= m_nData; i++)
		{
			if (i%m_nData == 0)
			{
				cnt++;
			}



		}

		return cnt;

	}


};


class CMyTv : public CMyObject
{
	virtual int GetID()
	{
		
		return 1;

	}


};

class CMyRadio : public CMyObject
{
	virtual int GetID()
	{
		return 2;

	}


};


class CMyCleaner : public CMyObject
{
	virtual int GetID()
	{
		return 3;

	}


};



int main(void)
{

	CMyTv tv;
	CMyRadio radio;
	CMyCleaner cleaner;


	printData(&tv);
	printData(&radio);
	printData(&cleaner);




	return 0;
}