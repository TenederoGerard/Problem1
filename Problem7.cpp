#include <iostream>
#include <conio.h>
using namespace std;

//This program generates the sum of all whole numbers.
int x, sum;
int main()

{ 	
	do
	{	cout << "Enter positive number: ";
		cin >> x;
		sum=0;
		for (int i=0; i <= x; i++)

		{
			if (x<1)
			{	cout << "Thank You!" << endl;
				break;
			}
			else
				{
				
					sum += i;		
				}
			}	if (x>0)
			cout << "The sum of all whole numbers from 1 to " << x << " is " << sum << endl;
	}while (x>0);
return 0;
}
	
	
	
	
	
	
	

