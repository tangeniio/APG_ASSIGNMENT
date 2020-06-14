#pragma once
#include <iostream>
#include <fstream>
#include <exception>
#include <string>
//#include "Menu.h"
#include "Seats.h"
#include "Movie.h"
#include "movies.h"

using namespace std;
movies m;
//class Booktickets {
	
//public:
	string movieName;
	int numofcust;
	double cashAmount;
	string paymentChoice;
	double totalcost;
	double change;

	//exception class for files 
	struct filesException : public exception {
		const char * what() const throw () {
			return "File not found";
		}
	};

	void openBookTicketsDB() {
		fstream f;
		string word, filename;
		filename = "BookedTicketsDataBase.txt";
		f.open(filename.c_str());

		try {

			if (!f.is_open()) {
				throw filesException();
			}
			else {
				// extracting words from the file
				while (getline(f, word))
				{
					// displaying content 
					cout << word << endl;
				}
			}
		}
		catch (filesException e) {
			cout << e.what() << endl;
		}


	}

	string paymentMethods = { "cash", "card" };

	void payment(double totalCost) {
		cout << "Payment Methods" << endl;
		cout << "[1]" << paymentMethods[0] << endl;
		cout << "[2]" << paymentMethods[1] << endl;
		cout << "please enter the number of the payment method : ";
		cin >> paymentChoice;
		if (paymentChoice == "Cash") {

			cout << "Amount given : " << endl;
			cin >> cashAmount;
			double change = cashAmount - totalCost;
			// reciept
			reciept(movieName, numofcust, totalcost, cashAmount, change, paymentChoice);
		}
		else {
			//receipt
			reciept(movieName, numofcust, totalcost, cashAmount, change, paymentChoice);
		}


	}

	void addCustomer() {
		movies m;
		//movie selection
		m.displayMovie();
		cout << "Enter movie name : " << endl;
		cin >> movieName;
		//if statement needed 
		cout << "for how many people ?" << endl;
		cin >> numofcust;
		//seat selection 
		//s.availableSeats();
		//s.SeatReservation();
		m.MoviePayment(movieName, numofcust);

		//payment();



	}
	void reciept(string movieName, int numofcust, double totalcost, double amountGiven, double change, string paymentMethod) {
		movies m;
		cout << "Booking Ticket " << endl;
		cout << "-------------------" << endl;
		m.getMovieDetails(movieName);
		cout << "Seat No : " << endl;
		cout << "Number of Customers : " << numofcust << endl;
		cout << "Payment method : " << paymentMethod << endl;
		cout << "Amount Given : " << amountGiven << endl;
		cout << "Total Cost : " << totalcost << endl;
		cout << "Change : " << change << endl;
		cout << "---------------------------" << endl;


	}


	void bookTickets() {
		//menu
		//do while 
		int choice;

		cout << "  --------------BOOK TICKETS-----------------   " << endl;
		cout << "                                                " << endl;
		cout << "************************************************" << endl;
		cout << "************************************************" << endl;
		cout << "***   [1] View Database                       ***" << endl;
		cout << "***   [2] Add Ticket Reservation              ***" << endl;
		cout << "***   [3] Exit                                ***" << endl;
		cout << "*************************************************" << endl;
		cout << "*************************************************" << endl;
		cout << "                                                  " << endl;
		cout << "                                                  " << endl;
		cout << "what would you like to do ?" << endl;
		cin >> choice;



		//switch statements
		switch (choice) {
		case 1:
			openBookTicketsDB();
			break;

		case 2://add new tickets
			//m.displayMovie();
			addCustomer();
			break;
		case 3://exit

			break;
		default:
			// code block
			break;
		}

	}


//};


