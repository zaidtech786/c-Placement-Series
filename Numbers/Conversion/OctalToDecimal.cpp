#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     long long octal = 462;
     int i = 0;
     int digit = 0;
     int decimal = 0;
     while (octal!=0)
     {
        digit = octal%10;
        decimal += digit * pow(8,i);
        octal/=10;
        i++;
     }

     cout << decimal;
     
    return 0;
}