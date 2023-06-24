#include <iostream>
using namespace std;

int main()
{	//Task 1
	int first_x, second_x, first_y, second_y;			

	cout << "Enter first x: ";
	cin >> first_x;
	cout << "Enter second x: ";
	cin >> second_x;
	cout << "Enter first y: ";
	cin >> first_y;
	cout << "Enter second y: ";
	cin >> second_y;

	if (first_x == second_x) {
		cout << "Line parallel the y-axis";
	}
	else if (first_y == second_y) {
		cout << "Line parallel the x - axis";
	}
	else {
		cout << "Non parralel x - axis or y - axis" << "\n";
	}


	//Task2
	double test;			
	cout << "Enter a fractional number: ";
	cin >> test;
	if (test == int(test)) {
		cout << "This number have not a fractional part.";
	}
	else {
		cout << "This number have a fractional part.";
	}


	//Task3
	int hours = 24;		
	int	minutes = 60;
	int seconds = 60;
	int hour, minute, second;
	cout << "Enter hours: ";
	cin >> hour;
	cout << "Enter minutes: ";
	cin >> minute;
	cout << "Enter seconds: ";
	cin >> second;
	if (hour > hours || minute > minutes || second > seconds) {
		cout << "Error";
	}
	else {
		cout << "Error not found";
	}


	//Task4
	int ticket;	
	cout << "Enter number of ticket: ";
	cin >> ticket;
	int n1 = (ticket / 100000) % 10;
	int n2 = (ticket / 10000) % 10;
	int n3 = (ticket / 1000) % 10;
	int n4 = (ticket / 100) % 10;
	int n5 = (ticket / 10) % 10;
	int n6 = ticket % 10;

	if (n1 + n2 + n3 == n4 + n5 + n6) {
		cout << "Lucky Ticket!";
	}
	else {
		cout << "Normal ticket";
	}


	//Task5
	int month;			
	int year;
	int day;
	cout << "Enter a year: ";
	cin >> year;
	cout << "Enter a month: ";
	cin >> month;
	cout << "Enter a day: ";
	cin >> day;

	if (month == 12 && day == 31) {
		cout << "Date = " << "01.01 " << year + 1 << "\n";
	}
	else if (year % 4 == 0 && month == 2 && day == 28) {
		cout << "Date = " << day + 1 << ".0" << month << "." << year << "\n";
	}
	else if (year % 4 == 0 && month == 2 && day == 29) {
		cout << "01 " << month + 1 << "." << year << "\n";
	}
	else if (year % 4 != 0 && month == 2 && day == 28) {
		cout << "01.0" << month + 1 << "." << year << "\n";
	}
	else if (year % 4 != 0 && month == 2 && day == 29) {
		cout << "Error date";
	}
	else if (day == 31) {
		cout << "Date = 01 " << month + 1 << "." << year;
	}
	else if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
		cout << "Date = " << day + 1 << "." << month << "." << year << "\n";
	}
	else {
		cout << "Error date";
	}
}

