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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;

	}

	//class ������ �����Ҵ�

};


class MyFriendDetailInf : public  MyFridendInfo
{
private:
	const char* addr;
	const char* phone;

public:
	MyFriendDetailInf()
		: addr("����Ư���� ������"), phone("0109989")
	{}

	void ShowMyFriendEdtailInfo()
	{
		ShowMyFriendInfo();
		cout << "�ּ� : " << addr << endl;
		cout << "��ȭ : " << phone << endl;
	}


};


int main(void)
{

	MyFriendDetailInf friends;

	friends.ShowMyFriendInfo();
	friends.ShowMyFriendEdtailInfo();




	return 0;

}





