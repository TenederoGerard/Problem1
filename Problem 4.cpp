#include <iostream>

using namespace std;

int main ()

{
    double x, y, z;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    if( x>=y && x>=z )
        printf("%.2f is the largest number.", x);

    if( y>=x && y>=z )
        printf("%.2f is the largest number.", y);

    if( z>=x && z>=y )
        printf("%.2f is the largest number.", z);

    return 0;
}


