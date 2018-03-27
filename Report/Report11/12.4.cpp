#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Merchandise
{


public:


	void GetData(string choice);
	void PrintData();
	

};


void Merchandise::PrintData()
{
	cout << "Merchandise Table(size:3)" << endl;
	cout << "m01 " << "soda " << 1000 << endl;
	cout << "m02 " << "ice cream " << 700 << endl;
	cout << "m03 " << "chocolate " << 2000 << endl;

	return;
}


void Merchandise::GetData(string choice)
{
	//enum { m01 = 1, m02 = 2, m02 = 3 }; 어떻게 사용할까?

	if (choice == "m01")
	{
		cout << "m01 " << "soda " << 1000 << endl;
	}

	if (choice == "m02")
	{
		cout << "m02 " << "ice cream " << 700 << endl;
	}

	if (choice == "m03")
	{
		cout << "m03 " << "chocolate " << 2000 << endl;
	}


}


int main(void)
{

	Merchandise List;
	string choice;
	string receipt;
	string a = "\n";
	
	char ch[100];
	/*
	cin >> receipt;

	if (receipt == "RECEIPT")
	{
		
		
		
		
	}

	*/
	int size=-1;

	while (1)
	{
		cin >> choice; //getchar

		size = choice.size();
		cout << size << endl;


		if (choice.empty()==0)
		{

			break;
		}


	}



	




	return 0;

}