#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	double averageDailyBalance;
	double netBalance;
	double interest;
	double payment;
	short int d1;
	short int d2;
	
	
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
	
	averageDailyBalance = netBalance * d1 - payment * d2 / d1;
	interest = (averageDailyBalance*0.0097);
	cout << "The Interest is: " << "P" <<" "<<showpoint<<setprecision(7)<<interest << endl;
	
	
	getch();
	return 0 ;
	
}
