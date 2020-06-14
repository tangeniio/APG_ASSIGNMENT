// APG Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Variables
    int seats[30] = { 0 };
    int userInput;
    int allSelectedSeats[30] = { 0 };
    int allselectedSeatsCounter = 1;

    int seatsLeftCounter = 30;

    //Display Avaible Seats and unavaible seats
    //Display available  Seats
    cout << "          Seats \n";
    cout << "****************************";
    cout << "\nAvailable: " << "\n";
    for (int i = 0; i < 30; i++) {
        //Check availability of seat and display it
        if (seats[i] == 0) {
            cout << i << ",";
        }
    };
    cout << "\n****************************\n";

    //Display unavailable Seats
    cout << "Unavailable: " << "\n";
    for (int i = 0; i < 30; i++) {
        //Check availability of seat and display it
        if (seats[i] == 1) {
            cout << i << ",";
        }
    };
    cout << "\n****************************\n";

    do {
        //Ask user to pick a seat
        cout << "\nSelect Seat Number: ";
        cin >> userInput;

        //Add selected seat to array for current user.
        allSelectedSeats[allselectedSeatsCounter] = userInput;
        cout << "\n";

        //Selecting Seat for user
        int selectedSteat = userInput;
        switch (selectedSteat) {
        case 1:
            //Reserve Seat
            seats[1] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 1;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 2:
            //Reserve Seat
            seats[2] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 2;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 3:
            //Reserve Seat
            seats[3] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 3;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 4:
            //Reserve Seat
            seats[4] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 4;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 5:
            //Reserve Seat
            seats[5] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 5;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 6:
            //Reserve Seat
            seats[6] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 6;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 7:
            //Reserve Seat
            seats[7] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 7;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 8:
            //Reserve Seat
            seats[8] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 8;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 9:
            //Reserve Seat
            seats[9] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 9;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 10:
            //Reserve Seat
            seats[10] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 10;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 11:
            //Reserve Seat
            seats[11] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 11;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 12:
            //Reserve Seat
            seats[12] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 12;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 13:
            //Reserve Seat
            seats[13] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 13;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 14:
            //Reserve Seat
            seats[14] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 14;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 15:
            //Reserve Seat
            seats[15] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 15;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 16:
            //Reserve Seat
            seats[16] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 16;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 17:
            //Reserve Seat
            seats[17] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 17;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 18:
            //Reserve Seat
            seats[18] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 18;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 19:
            //Reserve Seat
            seats[19] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 19;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 20:
            //Reserve Seat
            seats[20] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 20;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 21:
            //Reserve Seat
            seats[21] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 21;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 22:
            //Reserve Seat
            seats[22] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 22;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 23:
            //Reserve Seat
            seats[23] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 23;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 24:
            //Reserve Seat
            seats[24] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 24;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 25:
            //Reserve Seat
            seats[25] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 25;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 26:
            //Reserve Seat
            seats[26] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 26;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 27:
            //Reserve Seat
            seats[27] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 27;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 28:
            //Reserve Seat
            seats[28] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 28;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 29:
            //Reserve Seat
            seats[29] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 29;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 30:
            //Reserve Seat
            seats[30] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 30;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 31:
            //Reserve Seat
            seats[31] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 31;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 32:
            //Reserve Seat
            seats[32] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 32;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 33:
            //Reserve Seat
            seats[33] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 33;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 34:
            //Reserve Seat
            seats[34] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 34;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 35:
            //Reserve Seat
            seats[35] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 35;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 36:
            //Reserve Seat
            seats[36] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 36;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 37:
            //Reserve Seat
            seats[37] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 37;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 38:
            //Reserve Seat
            seats[38] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 38;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 39:
            //Reserve Seat
            seats[39] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 39;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 40:
            //Reserve Seat
            seats[40] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 40;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 41:
            //Reserve Seat
            seats[41] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 41;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 42:
            //Reserve Seat
            seats[42] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 42;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 43:
            //Reserve Seat
            seats[43] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 43;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 44:
            //Reserve Seat
            seats[44] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 44;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 45:
            //Reserve Seat
            seats[45] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 45;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 46:
            //Reserve Seat
            seats[46] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 46;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 47:
            //Reserve Seat
            seats[47] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 47;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 48:
            //Reserve Seat
            seats[48] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 48;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 49:
            //Reserve Seat
            seats[49] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 49;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        case 50:
            //Reserve Seat
            seats[50] = 1;

            //Add seat number to user selected seats
            allSelectedSeats[allselectedSeatsCounter] = 50;
            //add to counter
            allselectedSeatsCounter += 1;
            break;
        default:
            cout << "No such seat number available";
            break;
        }


        //Display Update of available seats
        //Display available  Seats
        cout << "     Update Seats View \n";
        cout << "****************************";
        cout << "\nAvailable: " << "\n";
        for (int i = 0; i < 30; i++) {
            //Check availability of seat and display it
            if (seats[i] == 0) {
                cout << i << ",";
            }
        };
        cout << "\n****************************\n";

        //Display unavailable Seats
        cout << "Unavailable: " << "\n";
        for (int i = 0; i < 30; i++) {
            //Check availability of seat and display it
            if (seats[i] == 1) {
                cout << i << ",";
            }
        };
        cout << "\n****************************\n";

        //Find out if more seats are to be added
        cout << "Add another seat? To Add, Enter '1', To complete Enter '2': ";
        cin >> userInput;

    }while (userInput == 1);

    //Display user selected seats
    cout << "\n****************************\n";
    cout << "All user selected seats: ";

    for (int i = 0; i < allselectedSeatsCounter+1; i++) {
        if (allSelectedSeats[i] > 0) {
            cout << allSelectedSeats[i] << ",";
        }
    }
    cout << "\n****************************\n";
}
