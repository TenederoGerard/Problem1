#include <iostream>
#include <conio.h>
using namespace std;

 int main()
 
 {
 	int x;
 	
 	cout << "Enter a positve number: ";
 	cin >> x;
 	cout << "Multipication table of " << x << ":" << endl;
 	
 	for (int i=1; i <= 10; i++)
 	{
			cout << i << " * " << x << " = " << x * i << endl;
 	}
 	
 	return 0;
}
 	
 	
 	
 	
 	
 	

