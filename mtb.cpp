#include <iostream>
using namespace std;
const int ROWS = 10;
const int COLUMNS = 10;

struct Seat
{
    bool isBooked;
    string name;
};

struct Theater
{
    Seat seats[ROWS][COLUMNS];
};

int main()
{
    int ticketPrice = 500;
    float totalTicketPrice;
    Theater theater;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            theater.seats[i][j].isBooked = false;
        }
    }
    cout << "Welcome to CinePlanet a movie ticket booking program " << endl;
    cout << "Main Menu" << endl;
    cout << "Today's Show - Titanic Rating(*9.5/10  10k votes)" << endl;
    cout << "1. Book Ticket" << endl;
    cout << "2. Quit" << endl;
    int choice;
    cin >> choice;
    while (choice != 2)
    {
        cout << "1. Book a ticket" << endl;
        cout << "2. View booked seats" << endl;
        cout << "3. Quit" << endl;
        int newChoice;
        cin >> newChoice;
        if (newChoice == 1)
        {
            cout << " Select Language" << endl;
            cout << "1. Hindi" << endl;
            cout << "2. English" << endl;
            cout << "3. Odia" << endl;
            cout << "4. Quit" << endl;
            int language;
            cin >> language;
            if (language != 4)
            {
                cout << "Choose available dates" << endl;
                cout << "1. 17" << endl;
                cout << "2. 18" << endl;
                cout << "3. 19" << endl;
                cout << "4. 20" << endl;
                cout << "5. 21" << endl;
                cout << "6. Quit" << endl;
                int date;
                cin >> date;
                if (date != 6)
                {

                    cout << "Choose Cinema Hall" << endl;
                    cout << "1. Cinepolis" << endl;
                    cout << "2. INOX" << endl;
                    cout << "3. Quit" << endl;
                    int cinemaHall;
                    cin >> cinemaHall;
                    if (cinemaHall != 3)
                    {

                        cout << "Choose the time" << endl;
                        cout << "1. 08.00 " << endl;
                        cout << "2. 12.00" << endl;
                        cout << "3. 16.00" << endl;
                        cout << "4. 20.00" << endl;
                        cout << "5. Quit" << endl;
                        int time;
                        cin >> time;
                        if (time != 5)
                        {
                            cout << "Enter your name: ";
                            string name;
                            cin >> name;

                            cout << "Enter the row number: ";
                            int row;
                            cin >> row;
                            cout << "Enter the column number: ";
                            int column;
                            cin >> column;
                            if (theater.seats[row][column].isBooked)
                            {
                                cout << "Sorry, that seat is already booked." << endl;
                            }
                            else
                            {
                                cout << "Pay " << ticketPrice << "to book" << endl;
                                cout << "Enter your UPI id : ";
                                string upi;
                                cin >> upi;

                                theater.seats[row][column].isBooked = true;
                                theater.seats[row][column].name = name;
                                cout << "Successfully booked seat " << row << "," << column << " for " << name << endl;
                            }
                        }
                        else if (time == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid choice";
                        }
                    }
                    else if (cinemaHall == 3)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid choice";
                    }
                }
                else if (date == 6)
                {
                    break;
                }
                else
                {
                    cout << "Invalid choice";
                }
            }
            else if (language == 4)
            {
                break;
            }
            else
            {
                cout << "Invalid choice";
            }
        }

        else if (newChoice == 2)
        {
            cout << "Booked seats: " << endl;
            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    if (theater.seats[i][j].isBooked)
                    {
                        cout << i << "," << j << ": " << theater.seats[i][j].name << endl;
                        cout << "1. Book another ticket" << endl;
                        int choicexyz;
                        cin >> choicexyz;
                        if (true)
                        {
                        }
                    }
                }
            }
        }
        else if (newChoice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid Choice";
        }
    }

    return 0;
}