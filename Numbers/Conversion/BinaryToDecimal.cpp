#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int i = 0; 
   long long binary = 11011;
   int decimal = 0;
   while (binary!=0)
   {
     int digit = binary % 10 ;
     decimal += digit * pow(2,i);
     binary/=10;
     i++;
   }
   cout << decimal;
   
    
    return 0;
}