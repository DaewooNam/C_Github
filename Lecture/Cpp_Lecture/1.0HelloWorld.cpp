#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

#include<iostream>
#include<string>

using namespace std;


int main()
{

	int intData(10); //C++ 위와 같이 초기화 할수 있음 이런식으로 많이 사용
	


	printf("Hello World\n");
	printf("%d\n", intData);


	/*
	std::cout << "Hell World" << std::endl; //type 을 정할 필요가 없다.
	std::cout << intData << std::endl;
	std::cout << 10.5 << std::endl;
	std::cout << 3+4 << std::endl;
	*/

	cout << "Hell World" << endl; //type 을 정할 필요가 없다.
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

	
	cout << "이름을 입력하세요: ";
	cin >> szName;
	cout << szName << " " <<intData<<endl;



	return 0;
}