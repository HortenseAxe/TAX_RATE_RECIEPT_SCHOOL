#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	const double STATE_TAX_RATE = 1.04;
	const double COUNTY_TAX_RATE = 1.02; 

	double TAX_TOTAL; 
	double TOTAL_COLLECTED;
	double SALES;
	double COUNTY_TOTAL;
	double STATE_TOTAL; 

	const int COL2 = 20; 
	const int COL1 = 18;

	string month;
	string year; 

	// This gets inputs of variables year, month, and total collected
	cout << "What is the year?  " << year;
	cin >> year; 
	cout << "What is the month?  " << month;
	cin >> month; 
	cout << "What was the total collected at the cash register?  ";
	cin >> TOTAL_COLLECTED;
	cout << endl << endl;

	// Calculates County and State Taxes and adds them to make the total tax
	STATE_TOTAL = (TOTAL_COLLECTED * STATE_TAX_RATE) - TOTAL_COLLECTED;
	COUNTY_TOTAL = (TOTAL_COLLECTED * COUNTY_TAX_RATE) - TOTAL_COLLECTED;
	TAX_TOTAL = STATE_TOTAL + COUNTY_TOTAL;

	//Calculates Sales
	SALES = TOTAL_COLLECTED - TAX_TOTAL;

	// This starts the beginning of the table printing
	cout << fixed << setprecision(2);

	cout << "DATE: " << month << ", " << year << endl;
	cout << "--------------------" << endl;
	cout << left << setw(COL2) << "Total Collected:" 
		 << right << setw(COL1) << TOTAL_COLLECTED << endl;
	//-----------------------------------------------------
	cout << left << setw(COL2) << "Sales:"
		<< right << setw(COL1) << SALES << endl;
	//-----------------------------------------------------
	cout << left << setw(COL2) << "County Sales Tax:"
		<< right << setw(COL1) << COUNTY_TOTAL << endl;
	//-----------------------------------------------------
	cout << left << setw(COL2) << "State Sales Tax:"
		<< right << setw(COL1) << STATE_TOTAL << endl;
	//-----------------------------------------------------
	cout << left << setw(COL2) << "Total Sales Tax:"
		<< right << setw(COL1) << TAX_TOTAL << endl;

	
	return 0;
}