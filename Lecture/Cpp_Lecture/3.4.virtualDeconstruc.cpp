#include<iostream>
class CParent
{
private:
	char *m_pzData;

public:
	CParent()
	{
		m_pzData = new char[32];
	}
	//~CParent()
	virtual ~CParent()	//�����Ҵ�� ������ �߻��Ҽ� �־� , �׻� �Ҹ��ڿ� virtual ���� �־��ش�.
	{
		std::cout << "~CParent" << std::endl;
		delete m_pzData;
	}


};

class CChild :public CParent
{
private:
	int *m_pnData;



public:
	CChild()
	{
		m_pnData = new int;

	}
	~CChild()
	{
		std::cout << "~CChild" << std::endl;
		delete m_pnData;
	}


};


int main(void)
{

	CParent* child = new CChild;

	delete child;
	
	return 0;
}