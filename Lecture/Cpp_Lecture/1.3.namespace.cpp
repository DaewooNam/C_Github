#include<iostream> //���� ����� ���� �̸��� �ߺ� �� �� �ִ�. �̸� ���� �ϱ� ����  

using namespace std;
using namespace TEST; // �����ϰ� �Ǹ� �ߺ� �� ������ ��ĥ�� �ִ�.


namespace TEST // �̸��� ���Ƶ� ����� �� �ִ�. ���� �ٸ� �濡 �ֱ� ������
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