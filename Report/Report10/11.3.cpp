#include<iostream>
using namespace std;

class Calculator
{
	double x = 0;
	double y = 0;

public:
	

	void Add(double x, double y)
	{
		cout << x << "+" << y <<"="<< x+ y << endl;
		
		return;
	}

	void Div(double x, double y)
	{
		cout << x << "/" << y << "=" << x / y << endl;
	}

	void Min(double x, double y)
	{
		cout << x << "-" << y << "=" << x - y << endl;
	}

	void Mul(double x, double y)
	{
		cout << x << "*" << y << "=" << x * y << endl;
	}

	void Init(double x, double y)
	{



		Add(x, y);

	}



};



int main(void)
{
	Calculator call;
	
	//call.Init();

	
	
	
	return 0;
}