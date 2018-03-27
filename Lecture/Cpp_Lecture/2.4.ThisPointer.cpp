#include<iostream>

using namespace std;

class CData
{

	int m_nData;

public: 
	CData(int nParam) : m_nData(nParam) {}

	void PrintData()
	{
		int m_nData = 100; // 이때 m_nData 값은 다시 초기화 됨.
		
		cout << m_nData << endl;
		cout << CData::m_nData << endl;
		cout << this->m_nData << endl; //dataA or dataB 값을 나타냄 main 함수에서 값을 결정해야 this 값이 할당됨
		cout << this->CData::m_nData << endl; // this Pointer 를 나타내기 불편하므로 주로 생략 but 복잡한 값을 나타낼때 사용함(상속)

	}

};



int main(void)
{
	CData dataA(10), dataB(20);
	
	dataA.PrintData();
	dataB.PrintData();


	return 0;
}