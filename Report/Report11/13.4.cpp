#include<iostream>
#include<string>

using namespace std;

typedef struct _node
{
	string code;
	string name;
	int price;
	struct _node *next;


}Node;



/*
void getData(MchdDetail list[3]);
void printData(string input);


void getData(MchdDetail list[3])
{
	list[0].code = "m01";
	list[0].name = "soda";
	list[0].price = 1000;

	list[1].code = "m02";
	list[1].name = "icecream";
	list[1].price = 700;

	list[2].code = "m03";
	list[2].name = "chocolate";
	list[2].price = 2000;



}


*/





int main(void)
{
	int i = 0;
	string *ch = new string("");
	char chTemp[2] = { 0, };
	
	//Node *head = new Node();
	//curr = head;



	Node *curr = new Node();
	Node *tail;

	
	while (1)
	{
		
		curr->price = i;
		
		curr->next = tail;
		tail = new Node();
		curr = tail;

		if (curr->next==NULL)
		{
			break;

		}

	}

	cout << "¹Û" << endl;


	/*
	while (1)
	{

		*ch="";

		while (1)
		{

			chTemp[0] = getchar();

			if (chTemp[0] == '\n')
			{
				break;
			}
			else
			{
				ch->append(chTemp);

			}



		}


		if (ch->compare("") == 0)
		{
			break;
		}
	}
	*/
	return 0;
}

//strcmp(ch, "\n");




/*
MchdDetail *list[3] = new MchdDetail[3]();

getData(list);


while (1)
{

	if (input[i] == "RECEIPT")
	{
		while (1)
		{

			cin >> input[i];



			if (input[i] == "end") //temp
			{
				break;

			}


			i++;
		}
	}




	for (int i = 0; i < 100; i++)
	{
		if (input[i] == list[0].code)
		{
			cout << list[0].code << " " << list[0].name << " " << list[0].price << endl;
		}
		else if (input[i] == list[1].code)
		{
			cout << list[1].code << " " << list[1].name << " " << list[1].price << endl;
		}
		else if (input[i] == list[2].code)
		{
			cout << list[2].code << " " << list[2].name << " " << list[2].price << endl;
		}

	}


	cout << "Continue(Yes/NO)" << endl;
	cin >>


}



return 0;
*/




