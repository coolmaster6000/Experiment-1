#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()

{
	int mass;
	int density;
	double volume;
	
	cout << "Enter Mass: " << " ";
	cin >> mass;
	cout << "Enter Density: " <<" ";
	cin >> density;
	volume = 0.25*mass/density;
	cout << "The Volume Is: " << setprecision(2) << volume << " cm^3" << endl;
	
	getch();
	return 0 ;
	
}
