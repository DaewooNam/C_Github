#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int &rParam) 
		: m_nData(rParam)
	{};

	int GetData(void)
	{

		return m_nData;
	}


private:
	int &m_nData;
};


int main(void)
{
	int a = 10;
	CRefTest rt(a);

	cout << rt.GetData() << endl;

	a = 20;
	cout << rt.GetData() << endl;


	return 0;
}