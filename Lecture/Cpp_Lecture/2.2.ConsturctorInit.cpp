#include<iostream>
using namespace std;

class CPoint
{
private:
	int m_x = 0;
	int m_y = 0;


public :
	CPoint(int x)
	{
		cout << "Cpoint(int x)" << endl;
		if (x > 100)
		{
			x = 100;
		}

		m_x = 100;

	}

	CPoint(int x,int y) 
		: CPoint(x)
	{
		cout << "Cpoint(int x,int y)" << endl;
		if (y > 200)
		{
			y = 200;
		}

		m_y = 200;
	}

	
	~CPoint() 
	{
		cout << "CPoint deconstructor" << endl;
	}

	void Print()
	{
		cout << "x=" << m_x << endl;
		cout << "y=" << m_y << endl;
	}


};


int main(void)
{
	//인스턴스

	CPoint xpoint(110);
	xpoint.Print();


	CPoint xypoint(50,250);
	xypoint.Print();

	return 0;


}