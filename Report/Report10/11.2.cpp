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

	cout << "�̸� :" << name << ",���� :" << age << ", ��� : " << hobby << endl;

}
void student::SetInfo(string _name, int _age, string _hobby)
{
	name = _name;
	age = _age;
	hobby = _hobby;
}
void student::Study()
{
	cout << "����!" << endl;
}

void student::Sleep()
{
	cout << "��!" << endl;
}





int main(void)
{

	
	student stu;
	stu.SetInfo("��ö��", 16, "��ǻ�Ͱ���");
	stu.ShowInfo();

	
	while (true)
	{
		stu.Study();
		stu.Sleep();


	}
	


	return 0;
}


