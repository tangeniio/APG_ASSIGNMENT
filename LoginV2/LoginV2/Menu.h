#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//Selection Variable
int answer;

//Menu Class
void menu()
{
	//MAIN SWITCH Statement For Navigation of the Menu
	switch (answer)
	{
		cout << "choose\n";
	case 1: //Number of Seats!
		cout << "1. Display Available Seats\n";
		cout << "2. Display Unavailable Seats\n";
		cout << "Option: ";
		cin >> answer;
		

		//Switch Statement within a Swith Statement for further navigation to Display Seating Availability
		switch (answer)
		{
			cout << "choose\n";
		case 1:
			cout << "1. Available Seats";
			cin >> answer;
			break;

		case 2:
			cout << "1. Unavailable Seats\n";
			cin >> answer;
			break;
		}

		cin >> answer;
		break; //Seating Navigation Switch Statement Ends Here!!!

	case 2: //Change Price!
		cout << "1. Enter New Price: ";
		cin >> answer;
		break;

	case 3: //Add Movies
		cout << "1. Enter Movie Details.\n";
		break;

	case 4: //Book Tickets
		cout << "1. Display List of Movies \n";
		break;

	default:
		cout << "Bad choice! Please try again: \n";
		break;
	} //MAIN SWITCH STATEMENT ENDS HERE!!!!!!
}