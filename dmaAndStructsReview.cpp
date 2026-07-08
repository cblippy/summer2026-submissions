// DA 1.2 Exercise Dynamic Memory and Structs
// Callie Sims -- Computer Science II Summer 2026

#include <iostream>
#include <string>
using namespace std;

struct Address
{
    string line1;
    string line2;
    string city;
    string state;
    string postalCode;
};

struct Account
{
    string firstName;
    string lastName;
    int acctNum;
    Address address;
    string phoneNumber;
    string email;
};

struct Date
{
    int year;
    string month;
    int day;
};

struct Time
{
    int hour;
    int minute;
    int timeZone;
};

struct Reservation
{
    Account account;
    Date date;
    Time time;
    string departureAirport;
    string arrivalAirport;
    string flightNumber;
};



Address* createAddress()
{
    Address* address = new Address;

    cout << "Enter address line 1: " << endl;
    getline(cin, (*address).line1);

    cout << "Enter address line 2: " << endl;
    getline(cin, (*address).line2);

    cout << "Enter city: " << endl;
    getline(cin, (*address).city);

    cout << "Enter state: " << endl;
    getline(cin, (*address).state);

    cout << "Enter postal code: " << endl;
    getline(cin, (*address).postalCode);

    return address;
}

Account* createAccount()
{
    Account* account = new Account;

    cout << "Please enter first name: " << endl;
    cin >> (*account).firstName;

    cout << "Please enter last name: " << endl;
    cin >> (*account).lastName;

    cout << "Please enter account number: " << endl;
    cin >> (*account).acctNum;

    cin.ignore();
    //omg

    Address* address = createAddress();
    (*account).address = *address;
    delete address;
    
    cout << "Please enter phone number: " << endl;
    cin >> (*account).phoneNumber;

    cout << "Please enter email: " << endl;
    cin >> (*account).email;

    return account;
}

Date* createDate()
{
    Date* date = new Date;

    cout << "Please enter year: " << endl;
    cin >> (*date).year;

    cout << "Please enter month: " << endl;
    cin >> (*date).month;

    cout << "Please enter day: " << endl;
    cin >> (*date).day;

    return date;
}

Time* createTime()
{
    Time* time = new Time;

    cout << "Please enter the hour: " << endl;
    cin >> (*time).hour;

    cout << "Please enter the minute: " << endl;
    cin >> (*time).minute;

    cout << "Please enter the time zone: " << endl;
    cin >> (*time).timeZone;

    return time;
}

Reservation* createReservation()
{
    Reservation* reservation = new Reservation;

    Account* account = createAccount();
    (*reservation).account = *account;
    delete account;

    Date* date = createDate();
    (*reservation).date = *date;
    delete date;

    Time* time = createTime();
    (*reservation).time = *time;
    delete time;

    cin.ignore();

    cout << "Enter departure airport: " << endl;
    cin >> (*reservation).departureAirport;

    cout << "Enter arrival airport: " << endl;
    cin >> (*reservation).arrivalAirport;

    cout << "Enter flight number: " << endl;
    cin >> (*reservation).flightNumber;

    return reservation;
}



void displayAddress(Address* address)
{
    cout << "\nAddress: " << endl;
    cout << (*address).line1 << endl;
    cout << (*address).line2 << endl;
    cout << (*address).city << ", " << (*address).state << " " << (*address).postalCode << endl;
}

void displayAccount(Account* account)
{
    cout << "\nAccount information: " << endl;

    cout << "Name: " << (*account).firstName << " " << (*account).lastName << endl;
    cout << "Account number: " << (*account).acctNum << endl;

    displayAddress(&(*account).address);

    cout << "Phone number: " << (*account).phoneNumber << endl;
    cout << "Email: " << (*account).email << endl;
}

void displayDate(Date* date)
{
    cout << (*date).month << " " << (*date).day << ", " << (*date).year << endl;
}

void displayTime(Time* time)
{
    cout << (*time).hour << ": " << (*time).minute << "Time zone: " << (*time).timeZone << endl;
}

void displayReservation(Reservation* reservation)
{
    cout << "\n\nReservation Information" << endl;
    displayAccount(&(*reservation).account);

    cout << "Flight information: " << endl;

    cout << "Departure airport: " << (*reservation).departureAirport << endl;

    cout << "Arrival airport: " << (*reservation).arrivalAirport << endl;

    cout << "Flight number: " << (*reservation).flightNumber << endl;

    cout << "Date: " << endl;
    displayDate(&(*reservation).date);
    cout << "Time: " << endl;
    displayTime(&(*reservation).time);
}



int main()
{
    Reservation* reservation = createReservation();
    displayReservation(reservation);
    delete reservation;
}