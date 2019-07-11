// preprocessor acesses libraries of iostream and conio.h
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	// initalization of data types which is int.
	int ticketPrice1,ticketPrice2,ticketPrice3,ticketPrice4;
 	int numberOfTicketsSold1,numberOfTicketsSold2,numberOfTicketsSold3,numberOfTicketsSold4;
	int TotalSaleAmt1,TotalSaleAmt2,TotalSaleAmt3,TotalSaleAmt4;
	
	
	// asks for ticket price and number of tickets sold.
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice1;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold1;
	// ticket price and number of ticets are multiplied to get the total sale amount.
	TotalSaleAmt1 = ticketPrice1 * numberOfTicketsSold1;
	cout << "Number of ticket sold: " <<numberOfTicketsSold1<<" "<<"Total Sale Amount: " << TotalSaleAmt1<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	// asks for ticket price and number of tickets sold.
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice2;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold2;
	// ticket price and number of ticets are multiplied to get the total sale amount.
	TotalSaleAmt2 = ticketPrice2 * numberOfTicketsSold2;
	cout << "Number of ticket sold: " <<numberOfTicketsSold2<<" "<<"Total Sale Amount: " << TotalSaleAmt2<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	// asks for ticket price and number of tickets sold.
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice3;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold3;
	// ticket price and number of ticets are multiplied to get the total sale amount.
	TotalSaleAmt3 = ticketPrice3 * numberOfTicketsSold3;
	cout << "Number of ticket sold: " <<numberOfTicketsSold3<<" "<<"Total Sale Amount: " << TotalSaleAmt3<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	// asks for ticket price and number of tickets sold.
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice4;
	cout <<"Enter the price of ticket: " <<" ";
	cin >> numberOfTicketsSold4;
	// asks for ticket price and number of tickets sold.
	TotalSaleAmt4 = ticketPrice4 * numberOfTicketsSold4;
	cout << "Number of ticket sold: " <<numberOfTicketsSold4<<" "<<"Total Sale Amount: " << TotalSaleAmt4<<".00"<< endl;

	getch();
	return 0;
}
