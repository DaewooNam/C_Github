#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio> // C에서 stido.h 값을 위와 같이 표현
#include<cstring>


/*
class 클래스 이름
{
	접근제어 지시자(private,public,protected(상속))
	멤버변수선언
	생성자(옵션)
	->생성자 초기화 목록 이용
	소멸자(옵션)
	멤버함수(method)선언 및 정의

};
*/

class USERDATA
{
	//pirvate (상수값->고정된 값은 private ) 이 값은 method 값에서만 변화 가능
private: //Default 값
	int priAge;


public://접근제어자
	/*
	int nAge ; //멤버 변수
	char szName[20];
	*/

	// 초기화 가능(생성자 앞에서 )
	int nAge = 30;
	char szName[20] = "daewoo";





	/***************************************
	//생성자 여러 개(4)
	USERDATA() //생성자 초기화 (여러개 만들수 있음)
		: nAge(40),szName("daewoo") //초기화 목록
	{
		std::cout << "USERDATA() 생성자1" << std::endl;
	}


	USERDATA(int _age) // 밖에 있는 값을 가지고 초기화 할 수 있음
		: nAge(_age), szName("daewoo") //초기화 목록
	{
		std::cout << "USERDATA() 생성자2" << std::endl;
	}

	USERDATA(int _age,char *pName) //
	{
		std::cout << "USERDATA() 생성자3" << std::endl;
	}
	*/


	USERDATA() //생성자 초기화 (여러개 만들수 있음)
		: szName("daewoo") //초기화 목록
	{
		std::cout << "USERDATA() 생성자1" << std::endl;
	}


	USERDATA(int _age) // 밖에 있는 값을 가지고 초기화 할 수 있음
		: nAge(_age) //초기화 목록
	{
		USERDATA(); //안쪽에 존재
		std::cout << "USERDATA() 생성자2" << std::endl;
	}










	~USERDATA() //소멸자 (하나만 만듦)
	{
		std::cout << "USERDATA() 소멸자" << std::endl;
	}




	/* 정의 및 선언
	//매서드(아래와 같이 매개변수가 필요 없을수 있음)
	void Print(void)
	{
		std::cout << nAge << " " << szName << std::endl;
	}

	void SetAge(int age)
	{
		priAge = age;
	}

	void PriPrint(void)
	{
		std::cout << priAge  << std::endl;
	}
	*/

	//정의
	void Print(void);
	void SetAge(int age);

};

//선언
void USERDATA::Print()
{
	std::cout << nAge << " " << szName << std::endl;

}

void USERDATA::SetAge(int age)
{
	priAge = age;

}




int main(void)
{

	std::cout << "main 함수 시작 " << std::endl;

	//**********************************************************
	// Class 사용(1)
	/*
	USERDATA user = {20, "dongbin"}; (생성자 소멸자 값이 없을때)
	std::cout << "main 함수 시작 " << std::endl;

	USERDATA user;
	user.nAge = 20;
	strcpy(user.szName, "Daewoo"); // 바로 복사가 안됨 user.szName="DAEWOO"
	user.Print();
	std::cout << "main 함수 종료 " << std::endl;
	*/


	//**********************************************************
	// CLASS 동적 할당 (2)
	/*
	USERDATA  *user = new USERDATA; //동적할당
	//(*user).nAge = 20;
	user->nAge = 20;

	//strcpy((*user).szName, "Daewoo"); // 바로 복사가 안됨 user.szName="DAEWOO"
	strcpy(user->szName, "Daewoo");


	//(*user).Print();
	user->Print();

	delete user; //동적할당 제거
	std::cout << "main 함수 종료 " << std::endl;
	*/



	//**********************************************************
	// CLASS 접근 제어자 (3)
	/*
	USERDATA  *user = new USERDATA; //동적할당

	user->SetAge(100);
	user->PriPrint();

	delete user; //동적할당 제거
	std::cout << "main 함수 종료 " << std::endl;
	*/

	//**********************************************************
	// CLASS 생성자 (4)
	USERDATA user1;
	USERDATA user2(1);

	user1.Print();
	user2.Print();





	return 0; // Return 소멸자 
}

