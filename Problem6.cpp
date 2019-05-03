#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int num, x=0, y=1, z=0;
	
	cout << "The next 20 Fibonacci Numbers\n\n";
	for (num =0; num <= 21; num++)
	{
		if (num == 0)
		{
            cout << " " << x;
            continue;
        }
        if (num == 1)
        {
            cout << "," ;
            cout << y << ",";
            continue;
	
		}
		 z = x + y;
         x = y;
         y = z;
        
        cout << z << ",";
    }
    return 0;
}

	
	
	
	
	
	
	

