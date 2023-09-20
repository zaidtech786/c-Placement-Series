#include <iostream>
using namespace std;

int main()
{
    int no = 1234;
    int sum = 0 , digit = 0;
    while (no != 0)
    {
        digit = no % 10 ;
        sum+=digit;
        no/=10;
    }
    cout << "Sum Of Digits is " << sum;
    
    return 0;
}