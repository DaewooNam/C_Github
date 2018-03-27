#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio> // C���� stido.h ���� ���� ���� ǥ��
#include<cstring>


/*
class Ŭ���� �̸�
{
	�������� ������(private,public,protected(���))
	�����������
	������(�ɼ�)
	->������ �ʱ�ȭ ��� �̿�
	�Ҹ���(�ɼ�)
	����Լ�(method)���� �� ����

};
*/

class USERDATA
{
	//pirvate (�����->������ ���� private ) �� ���� method �������� ��ȭ ����
private: //Default ��
	int priAge;


public://����������
	/*
	int nAge ; //��� ����
	char szName[20];
	*/

	// �ʱ�ȭ ����(������ �տ��� )
	int nAge = 30;
	char szName[20] = "daewoo";





	/***************************************
	//������ ���� ��(4)
	USERDATA() //������ �ʱ�ȭ (������ ����� ����)
		: nAge(40),szName("daewoo") //�ʱ�ȭ ���
	{
		std::cout << "USERDATA() ������1" << std::endl;
	}


	USERDATA(int _age) // �ۿ� �ִ� ���� ������ �ʱ�ȭ �� �� ����
		: nAge(_age), szName("daewoo") //�ʱ�ȭ ���
	{
		std::cout << "USERDATA() ������2" << std::endl;
	}

	USERDATA(int _age,char *pName) //
	{
		std::cout << "USERDATA() ������3" << std::endl;
	}
	*/


	USERDATA() //������ �ʱ�ȭ (������ ����� ����)
		: szName("daewoo") //�ʱ�ȭ ���
	{
		std::cout << "USERDATA() ������1" << std::endl;
	}


	USERDATA(int _age) // �ۿ� �ִ� ���� ������ �ʱ�ȭ �� �� ����
		: nAge(_age) //�ʱ�ȭ ���
	{
		USERDATA(); //���ʿ� ����
		std::cout << "USERDATA() ������2" << std::endl;
	}










	~USERDATA() //�Ҹ��� (�ϳ��� ����)
	{
		std::cout << "USERDATA() �Ҹ���" << std::endl;
	}




	/* ���� �� ����
	//�ż���(�Ʒ��� ���� �Ű������� �ʿ� ������ ����)
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

	//����
	void Print(void);
	void SetAge(int age);

};

//����
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

	std::cout << "main �Լ� ���� " << std::endl;

	//**********************************************************
	// Class ���(1)
	/*
	USERDATA user = {20, "dongbin"}; (������ �Ҹ��� ���� ������)
	std::cout << "main �Լ� ���� " << std::endl;

	USERDATA user;
	user.nAge = 20;
	strcpy(user.szName, "Daewoo"); // �ٷ� ���簡 �ȵ� user.szName="DAEWOO"
	user.Print();
	std::cout << "main �Լ� ���� " << std::endl;
	*/


	//**********************************************************
	// CLASS ���� �Ҵ� (2)
	/*
	USERDATA  *user = new USERDATA; //�����Ҵ�
	//(*user).nAge = 20;
	user->nAge = 20;

	//strcpy((*user).szName, "Daewoo"); // �ٷ� ���簡 �ȵ� user.szName="DAEWOO"
	strcpy(user->szName, "Daewoo");


	//(*user).Print();
	user->Print();

	delete user; //�����Ҵ� ����
	std::cout << "main �Լ� ���� " << std::endl;
	*/



	//**********************************************************
	// CLASS ���� ������ (3)
	/*
	USERDATA  *user = new USERDATA; //�����Ҵ�

	user->SetAge(100);
	user->PriPrint();

	delete user; //�����Ҵ� ����
	std::cout << "main �Լ� ���� " << std::endl;
	*/

	//**********************************************************
	// CLASS ������ (4)
	USERDATA user1;
	USERDATA user2(1);

	user1.Print();
	user2.Print();





	return 0; // Return �Ҹ��� 
}

