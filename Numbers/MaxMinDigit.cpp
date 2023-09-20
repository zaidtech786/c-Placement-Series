#include <iostream>
using namespace std;

int main()
{
    int num = 2746;
    int min = 100;
    int max = 0;
    while (num != 0)
    {
       int digit = num % 10 ;
       min = digit < min ? digit : min;
       max = digit > max ? digit : max;
       num/=10;
    }
    cout << min << endl;
    cout << max << endl;
    
    return 0;
}