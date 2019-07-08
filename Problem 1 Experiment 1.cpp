#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int ticketPrice1,ticketPrice2,ticketPrice3,ticketPrice4;
 	int numberOfTicketsSold1,numberOfTicketsSold2,numberOfTicketsSold3,numberOfTicketsSold4;
	int TotalSaleAmt1,TotalSaleAmt2,TotalSaleAmt3,TotalSaleAmt4;
	
	
	
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice1;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold1;
	TotalSaleAmt1 = ticketPrice1 * numberOfTicketsSold1;
	cout << "Number of ticket sold: " <<numberOfTicketsSold1<<" "<<"Total Sale Amount: " << TotalSaleAmt1<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice2;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold2;
	TotalSaleAmt2 = ticketPrice2 * numberOfTicketsSold2;
	cout << "Number of ticket sold: " <<numberOfTicketsSold2<<" "<<"Total Sale Amount: " << TotalSaleAmt2<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice3;
	cout <<"Enter the number of ticket sold: "<<" ";
	cin >> numberOfTicketsSold3;
	TotalSaleAmt3 = ticketPrice3 * numberOfTicketsSold3;
	cout << "Number of ticket sold: " <<numberOfTicketsSold3<<" "<<"Total Sale Amount: " << TotalSaleAmt3<<".00"<< endl;
	cout << "--------------------------------------------------------------------------------------------------------"<< endl;
	
	
	cout <<"Enter the price of ticket: " <<" ";
	cin >> ticketPrice4;
	cout <<"Enter the price of ticket: " <<" ";
	cin >> numberOfTicketsSold4;
	TotalSaleAmt4 = ticketPrice4 * numberOfTicketsSold4;
	cout << "Number of ticket sold: " <<numberOfTicketsSold4<<" "<<"Total Sale Amount: " << TotalSaleAmt4<<".00"<< endl;

	getch();
	return 0 ;
}
