#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Seats.h"
#include "Movie.h"
#include "movies.h"


using namespace std;
//Selection Variable
int answer;
//Menu Class
void menu()
{
	Seats s;
	movies m;

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
		case 1://view available seats 
			s.availableSeats();
			break;

		case 2://view unavailable seats 
			s.unavailableSeats();
			break;
		}

		cin >> answer;
		break; //Seating Navigation Switch Statement Ends Here!!!

	case 2: //Change Price!
		m.changePrice();
		break;

	case 3: //Add Movies
		m.addMovie();
		break;

	case 4: //Remove Movies 
		m.removeMovie();
		break;

		
	case 5: //Book Tickets
		m.bookTickets();
		break;

	default:
		cout << "Bad choice! Please try again: \n";
		break;
	} //MAIN SWITCH STATEMENT ENDS HERE!!!!!!
}