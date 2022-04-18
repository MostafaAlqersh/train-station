#include <iostream>
#include <string>
using namespace std;




int main()
{
	int type, num;
	float date ,time;
	string names, place;
	cout << " |---------------------------------|"<<endl;
	cout << " |             wellcome            |" << endl;
	cout << " |---------------------------------|"<<endl;
	//name of user
	cout << " | Name  : ";
	cin >> names;
	//type of ticket
	cout << " | type  : ";
	cin >> type;
	//place where user go
	cout << " | palce : ";
	cin >> place;
	//the date 
	cout << " | Date  : ";
	cin >> date;
	//the time
	cout << " | time  : ";
	cin >> time ;
	cout << " | N_p   : ";
	cin >> num;
	
	//this function that calc the price of ticket
	switch (type)
	{
	case 1:
		cout << " | price : " << num * 100<<endl;
		break;
	case 2:
		cout << " | price : " << num * 80<<endl;
		break;
	case 3:
		cout << " | price : " << num * 60<<endl;
		break;
	case 4:
		cout << " | price : " << num * 40<<endl;
		break;
	case 5:
		cout << " | price : " << num * 25<<endl;
		break;

	}
	
	cout << " ------------------------------------ ";



	}









