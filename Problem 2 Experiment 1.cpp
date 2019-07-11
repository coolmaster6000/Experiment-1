// preprocessor - acessed libraries of iostream, conio.h, and iomanip.
// iomanip - library for manipulation of decimal places
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()

{
	int mass;
	int density;
	double volume;
	// asks for mass and density.
	cout << "Enter Mass: " << " ";
	cin >> mass;
	cout << "Enter Density: " <<" ";
	cin >> density;
	// mass is divided by density times 1/4 or 0.25.
	// answer is volume and the units is cubic centimeters
	volume = 0.25*mass/density;
	// setprecision - is acessed through iomanip to set the decimal into 2 significant digits.
	cout << "The Volume Is: " << setprecision(2) << volume << " cm^3" << endl;
	
	getch();
	return 0 ;
	
}
