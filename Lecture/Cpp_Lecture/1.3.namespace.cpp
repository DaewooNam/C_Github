#include<iostream> //여러 사람이 사용시 이름이 중복 될 수 있다. 이를 방지 하기 위해  

using namespace std;
using namespace TEST; // 남용하게 되면 중복 된 값들이 겹칠수 있다.


namespace TEST // 이름이 같아도 사용할 수 있다. 각각 다른 방에 있기 때문에
{
	int tetfunc(int a)
	{
		return a;
	}

}


namespace TEST2
{
	int tetfunc(int a)
	{
		return a*a;
	}

}



int main(void)
{		
	std::cout<< TEST::tetfunc(10) << std::endl;
	std::cout<< TEST2::tetfunc(10) << std::endl;

	cout << TEST::tetfunc(10) << endl;
	cout << TEST2::tetfunc(10) << endl;

	
	return 0;
}