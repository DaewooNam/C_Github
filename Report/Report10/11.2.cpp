#include <cstdio>
#include <iostream>
#include<string>

using namespace std;

class student
{
private:
	string name;
	int age;
	string hobby;

public:
	void ShowInfo();
	void SetInfo(string _name, int _age, string _hobby);
	void Study();
	void Sleep();


};

void student::ShowInfo()
{

	cout << "이름 :" << name << ",나이 :" << age << ", 취미 : " << hobby << endl;

}
void student::SetInfo(string _name, int _age, string _hobby)
{
	name = _name;
	age = _age;
	hobby = _hobby;
}
void student::Study()
{
	cout << "공부!" << endl;
}

void student::Sleep()
{
	cout << "잠!" << endl;
}





int main(void)
{

	
	student stu;
	stu.SetInfo("김철수", 16, "컴퓨터게임");
	stu.ShowInfo();

	
	while (true)
	{
		stu.Study();
		stu.Sleep();


	}
	


	return 0;
}


