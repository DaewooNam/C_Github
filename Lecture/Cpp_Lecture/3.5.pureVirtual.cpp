#include <iostream>

using namespace std;


class CMyinterface
{
protected:
	int cnt = 0;
	int cntdiv = 0;

public:
	CMyinterface() { cout << "CMyinterface" << endl; }

	virtual int GetData(void) = 0;//���� �����Լ�
	virtual void SetData(int) = 0;

	virtual int Pow(int) = 0;
	virtual int GCPcnt(int) = 0;



};



class CMydata : public CMyinterface // public ���� ��ӹ޴� �Լ��� public ������ ���� or Protecetd ���� ��� ���� �Լ��� protected ���� ���� 
{
public:
	CMydata() { cout << "CMydata" << endl; }
	virtual int GetData(void)
	{
		return m_nData;

	}

	virtual void SetData(int nParam)
	{
		m_nData = nParam;

	}

	virtual int Pow(int a)
	{
		return a * a;
	}
	virtual int GCPcnt(int num) //��� ����
	{

		for (int i = 2; i <= num; i++)
		{
			if (i%num == 0)
			{
				cnt++;
			}
			


		}





	}



private:

	int m_nData = 0;



};

int main()
{
	//CMyinterface a;
	CMydata func;

	int cnt;
	cnt = func.GCPcnt(4);
	cout << cnt << endl;

	return 0;


}
