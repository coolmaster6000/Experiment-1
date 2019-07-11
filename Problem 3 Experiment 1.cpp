// preprocessor - it is declared to access iostream, conio.h, and iomanip.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	// double data type is used to store decimal numbers.
	double averageDailyBalance;
	double netBalance;
	double interest;
	double payment;
	short int d1;
	short int d2;
	
	// asks for inputs.
	cout << "Please Enter Net Balance: " << endl;
	cin >> netBalance;
	cout <<"Please Enter Your Payment: " << endl;
	cin >> payment;
	cout <<"Please Enter How Much interest: " << endl;
	cin >> interest;
	cout <<"Enter How Many Days In billing Cycle: " << endl;
	cin >> d1;
	cout << "Enter How Many Before Billing Cycle: " << endl;
	cin >> d2;
	// this is the formula to get the average daily balance.
	// the average daily balance is netbalance multiplied by in billing cycle minus payment and then multiplied by during billing divided by after billing.
	averageDailyBalance = netBalance * d1 - payment * d2 / d1;
	// then the obtained answer is multiplied by 0.0097.
	interest = (averageDailyBalance*0.0097);
	cout << "The Interest is: " << "P" <<" "<<showpoint<<setprecision(7)<<interest << endl;
	
	
	getch();
	return 0 ;
	
}
