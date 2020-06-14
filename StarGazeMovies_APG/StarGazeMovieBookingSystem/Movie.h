#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class movie
{
public:
	string title;
	double price;
	string cinema;
	string date;

	movie(string title = "hh", double price = 72.5, string cinema = "",
		string date = "") : title(title), price(price), cinema(cinema), date(date)
	{}

	bool operator==(const movie & obj)
	{
		return (title == obj.title) && (price == obj.price) &&
			(cinema == obj.cinema) && (date == obj.date);
	}

	friend ostream & operator << (ostream &out, const movie & obj)
	{
		out << obj.title << "\n" << obj.price << "\n" << obj.cinema <<
			"\n" << obj.date << std::endl;
		return out;
	}

	friend istream & operator >> (istream &in, movie &obj)
	{
		in >> obj.title;
		in >> obj.price;
		in >> obj.cinema;
		in >> obj.date;
		return in;
	}

public:
	// Setter
	void setTitle(string s) {
		title = s;
	}
	// Getter
	string getTitle() {
		return title;
	}

public:
	// Setter
	void setPrice(double s) {
		price = s;
	}
	// Getter
	double getPrice() {
		return price;
	}

public:
	// Setter
	void setCinema(string s) {
		cinema = s;
	}
	// Getter
	string getCinema() {
		return cinema;
	}

public:
	// Setter
	void setDate(string s) {
		date = s;
	}
	// Getter
	string getDate() {
		return date;
	}

};

