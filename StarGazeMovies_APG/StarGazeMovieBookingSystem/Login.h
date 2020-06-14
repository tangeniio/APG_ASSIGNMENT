#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function that confirms that a user profile exists or not by reading trough the .txt files created when a user account is created.
bool UserLoggedIn()
{
	string username, password, un, pw;

	cout << "Username: "; cin >> username;
	cout << "Password: "; cin >> password;

	ifstream read(username + ".txt");
	getline(read, un);
	getline(read, pw);


	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}

}
