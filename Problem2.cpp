#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int gallon, balance, total ; 
	cout << "Enter meter readings in gallons: ";
	cin >> gallon;
	cout << "Enter unpaid balance:";
	cin >> balance;
	
	if (balance > 0)
	{
		cout << "Your total balance is: " << "P" <<  35 + (gallon * 1.10) + balance + 20 << endl;}
		
		else 
	{
		cout << "Your total balance is:" << "P" <<  35 + (gallon * 1.10) <<endl;
	}
	

	
	return 0;
}
