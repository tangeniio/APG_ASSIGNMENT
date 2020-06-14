#include <iostream>
#include <fstream>
#include <string>

#include "Seating.h"

using namespace std;
//Selection Variable
int answer;

//Menu Function
void menu()
{
	//MAIN SWITCH Statement For Navigation of the Menu
	switch (answer)
	{
		cout << "choose\n";
	case 1: //Number of Seats!
		cout << "Display Available & Unavailable Seats\n";
		seating();

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