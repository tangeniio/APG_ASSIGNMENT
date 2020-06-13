#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <conio.h>

#include "Login.h"
#include "Menu.h"


using namespace std;

int main()
{
	int enter;

	cout << "#####################################\n";
	cout << "#           MATRIX MOVIES           #\n";
	cout << "#           BOOKING SYSTEM          #\n";
	cout << "#####################################\n";

	cout << "1: Sign Up\n2: Login\nEnter: ";
	cin >> enter;
	//IF statement that allows a user to Login or create a new user account
	//The IF statement creates a .txt file containing user details when the user creates a new account
	//The File location is the project folder of this program.
	if (enter == 1)
	{
		string username, password;

		cout << "Enter A Username: "; cin >> username;
		cout << "Enter A Password: "; cin >> password;

		ofstream file;
		file.open(username + ".txt");
		file << username << endl << password;
		file.close();

		main();

	}
	else if (enter == 2)
	{
		bool status = UserLoggedIn();

		if (!status)
		{
			cout << "Error! Login Failed" << endl;
			main();
		}
		else
		{

			bool keepLooping = true;


			while (keepLooping)
			{
				cout << "#####################################\n";
				cout << "#           MATRIX MOVIES           #\n";
				cout << "#           BOOKING SYSTEM          #\n";
				cout << "#####################################\n";
				cout << "\n";
				cout << "Welcome To Matrix Movies System\n";
				cout << "Choose The Following Options From The Menu\n";
				cout << "\n";
				cout << "1. Number Of Seats\n";
				cout << "2. Change Price\n";
				cout << "3. Add Movies\n";
				cout << "4. Book Tickets\n";
				cout << "\n";
				cout << "Option: ";

				cin >> answer;

				menu();

				if (answer < 1 || answer > 4)
					keepLooping = true;
				else
					keepLooping = false;

			}


			_getch();
			return answer;
		}
	}
}