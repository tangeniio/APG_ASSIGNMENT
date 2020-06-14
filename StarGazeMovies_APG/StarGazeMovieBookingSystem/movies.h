#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;


class movies
{
	//creates movie ojects  within an array
	movie group[5] = { movie("27_Dresses", 72.5, "Cinema 1", "Date_and_Time: 16:00_27/01"),
					movie("The_Dark_Knight", 72.5, "Cinema 2", "Date_and_Time: 16:00_27/01"),
					movie("none", 72.5, "Cinema 3", "Date_and_Time: 16:00_27/01"),
					movie("Frozen", 72.5, "Cinema 4", "Date_and_Time: 16:00_27/01"),
					movie("Brave", 72.5, "Cinema 5", "Date_and_Time: 16:00_27/01") };

	string movie::*ptitle = &movie::title;// helps reach member values in certain methods

public:
	
	string movieName;
	int numofcust;
	double cashAmount;
	string paymentChoice;

	double change;
	
	string word, filename;

	// change title of the movie to a user defined title
	void addMovie() {
		size_t n = sizeof(group) / sizeof(group[0]);
		string usr;

		for (size_t i = 0; i < n; i++) {			//prints the movies on the system
			cout << group[i].movie::title << "\n";
		}

		try {
			cout << "Please enter the movie title you would like to add.\n";
			cin >> usr;

			for (size_t i = 0; i < n; i++) {

				if (group[i].movie::title.compare("none") == 0)
				{
					group[i].setTitle(usr);
					cout << usr << " has been added to slot " << i << "\n";

				}
				else
					cout << "slot " << i << " does not match your search. \n";
			}
		}
		catch (const invalid_argument& ia) {
			cerr << "Invalid argument: " << ia.what() << '\n';
		}

	}
	//changes the title of a user defined movie to none
	void removeMovie() {

		size_t n = sizeof(group) / sizeof(group[0]); // gives a value the size of the array
		string usr; // for  user input

		for (size_t i = 0; i < n; i++) {			//displays the movies that are on the system
			cout << group[i].movie::title << "\n";
		}

		try {
			cout << "Please enter the movie title you would like to remove.\n";
			cin >> usr;

			for (size_t i = 0; i < n; i++) {

				if (group[i].movie::title.compare(usr) == 0)
				{
					group[i].setTitle("none");				//executes when the entered title is found
					cout << usr << " has been removed \n";
				}
				else
					cout << "slot " << i << " does not match your search. \n";//if the user entered title is not on the system
			}
		}
		catch (const invalid_argument& ia) {
			cerr << "Invalid argument: " << ia.what() << '\n';
		}

	}

	void changePrice() {

		try {
			double orig;// for the movie's new price
			int code;// to choose a movie to edit
			cout << "please enter the corresponding code";
			cin >> code;
			//allows the user to choose which slot to modify
			switch (code) {
			case 1:
				cout << "please enter the new price";
				cin >> orig;
				group[0].setPrice(orig);
				break;
			case 2:
				cout << "please enter the new price";
				cin >> orig;
				group[1].setPrice(orig);
				break;
			case 3:
				cout << "please enter the new price";
				cin >> orig;
				group[2].setPrice(orig);
				break;
			case 4:
				cout << "please enter the new price";
				cin >> orig;
				group[3].setPrice(orig);
				break;
			case 5:
				cout << "please enter the new price";
				cin >> orig;
				group[4].setPrice(orig);
				break;
				//if the user enters a digit higher than 5
			default:
				cout << "incorrect code entered";
			}
		}
		catch (const invalid_argument& ia) {
			cerr << "Invalid argument: " << ia.what() << '\n';
		}
	}

	//prints all the movie information to the screen
	void displayMovie() {

		size_t n = sizeof(group) / sizeof(group[0]);

		for (size_t i = 0; i < n; i++) {
			cout << group[i] << ' ';
		}

	}


	void getMovieDetails(string name) {
		for (size_t i = 0; i < 5; i++) {

			if (group[i].movie::title.compare(name) == 0)
			{
				string title = group[i].getTitle();
				string date = group[i].getDate();
				string cinema = group[i].getCinema();

				cout << "Movie Name : " << title << endl;
				cout << "Date : " << date << endl;
				cout << "Cinemar : " << cinema << endl;


			}
		}
	}

	//exception class for files 
	struct filesException : public exception {
		const char * what() const throw () {
			return "File not found";
		}
	};


	void openBookTicketsDB() {
		ifstream f;
		
		f.open("BookedTicketsDataBase.txt");

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
	void reciept(string movieName, int numofcust, double totalcost, double amountGiven, double change) {

		cout << "Booking Ticket " << endl;
		cout << "-------------------" << endl;
		getMovieDetails(movieName);
		cout << "Seat No : " << endl;
		cout << "Number of Customers : " << numofcust << endl;
		cout << "Amount Given : " << amountGiven << endl;
		cout << "Total Cost : " << totalcost << endl;
		cout << "Change : " << change << endl;
		cout << "---------------------------" << endl;


	}

	void MoviePayment(string name, int numofcust) {
		for (size_t i = 0; i < 5; i++) {

			if (group[i].movie::title.compare(name) == 0)
			{
				double pricePerTicket = group[i].getPrice();
				double totalCost = pricePerTicket * numofcust;


				cout << "Amount given : " << endl;
				cin >> cashAmount;
				double change = cashAmount - totalCost;
				// reciept
				reciept(movieName, numofcust, totalCost, cashAmount, change);
			  
			}

		}
	}

		

		void addCustomer() {

			//movie selection
			displayMovie();
			cout << "Enter movie name : " << endl;
			cin >> movieName;
			cout << "for how many people ?" << endl;
			cin >> numofcust;
			//s.seatselection 
			//s.availableSeats();
		
		//	s.SeatReservation();
			MoviePayment(movieName, numofcust);

		



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
				
				addCustomer();
				break;
			case 3://exit
				exit(0);
				break;
			default:
				cout << "Please enter a valid value" << endl;
				break;
			}

		}

	};



