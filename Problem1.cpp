#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{
	char package;
	int hours;
	
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr\n";
	cout <<	"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr\n";
	cout << "Package C: For P1995/mo of unlimited access is provided.\n";
	
	cout << "Enter desired package:";
	cin >> package;
	cout << "Enter hours used: ";
	cin >> hours;
	

	
	if (package == 'a' || package == 'A')
	{ if (hours<=10)
		cout << "Your monthly bill is Php 995.00";
	  else 
		cout << "Your montly bill is Php " << 995 + (hours-10) * 20;}
		
	if (package == 'b' || package == 'B')
	{ if (hours<=20)
		cout << "Your monthly bill is Php 1495.00";
	  else 
		cout << "Your montly bill is Php " << 1495 + (hours-20) * 10;}
		
	if (package == 'c' || package == 'C')
	{ if (hours)
		cout << "Your monthly bill is Php 1995.00";}



	

	
	
	
	
	
	
	
	

	
	return 0;
}
