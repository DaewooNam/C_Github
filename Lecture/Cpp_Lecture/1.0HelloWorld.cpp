#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

#include<iostream>
#include<string>

using namespace std;


int main()
{

	int intData(10); //C++ ���� ���� �ʱ�ȭ �Ҽ� ���� �̷������� ���� ���
	


	printf("Hello World\n");
	printf("%d\n", intData);


	/*
	std::cout << "Hell World" << std::endl; //type �� ���� �ʿ䰡 ����.
	std::cout << intData << std::endl;
	std::cout << 10.5 << std::endl;
	std::cout << 3+4 << std::endl;
	*/

	cout << "Hell World" << endl; //type �� ���� �ʿ䰡 ����.
	cout << intData << endl;
	cout << 10.5 << endl;
	cout << 3 + 4 << endl;

	scanf("%d",&intData);
	std::cin >> intData;
	cout << intData << endl;

	char szName[20];
	
	//char szNmae[20];
	std::string s0("initail string");
	s0 = "dog";
	std::cout << s0<<std::endl;

	
	cout << "�̸��� �Է��ϼ���: ";
	cin >> szName;
	cout << szName << " " <<intData<<endl;



	return 0;
}