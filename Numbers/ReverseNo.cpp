#include <iostream>
using namespace std;

int main()
{
    int no = 1234;
    int rev = 0;
    while (no !=0)
    {
       int digits = no % 10 ;
       rev = rev * 10 + digits;
       no /=10;
    }
    cout << rev;
    
    return 0;
}