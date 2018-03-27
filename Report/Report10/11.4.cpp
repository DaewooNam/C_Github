#include<iostream>
#include<string>
using namespace std;



class Printer
{
	string ch;

public:
	
	
	void SetString(string ch1)
	{
		ch = ch1;

	}
	

	void ShowString()
	{
		cout << ch << endl;
	}

};



int main(void)
{
	Printer pnt;

	pnt.SetString("Hello world");
	pnt.ShowString();
	pnt.SetString("I love C++");
	pnt.ShowString();


	return 0;
}