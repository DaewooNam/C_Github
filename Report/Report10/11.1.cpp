#include<iostream>
using namespace std;

class box
{
public:
	double length;
	double breath;
	double height;

};




int main(void)
{

	box box1;
	box box2;

	double volume = 0.0;

	//box 1 specification
	box1.height = 5.0;
	box1.length = 6.0;
	box1.breath = 7.0;

	//box 2 specification
	box2.height = 10.0;
	box2.length = 12.0;
	box2.breath = 13.0;

	//volume of box 1
	volume = box1.height * box1.length * box1.breath;
	cout << "Volume of Box1 :" << volume << endl;


	//volume of box 1
	volume = box2.height * box2.length * box2.breath;
	cout << "Volume of Box2 :" << volume << endl;



	return 0;
}