#include<iostream>
using namespace std;


class MyFridendInfo 
{
private:
	const char* name;
	int age;
public:

	MyFridendInfo * a = new MyFridendInfo;

	MyFridendInfo()
		: age(30), name ("daewoo")
	{
	}

	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;

	}

	//class 내에서 동적할당

};


class MyFriendDetailInf : public  MyFridendInfo
{
private:
	const char* addr;
	const char* phone;

public:
	MyFriendDetailInf()
		: addr("서울특별시 도봉구"), phone("0109989")
	{}

	void ShowMyFriendEdtailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl;
	}


};


int main(void)
{

	MyFriendDetailInf friends;

	friends.ShowMyFriendInfo();
	friends.ShowMyFriendEdtailInfo();




	return 0;

}





