#include <iostream>
using namespace std;

int main()
{
    int no = 5, fact = 1;
    for (int i = 1; i <= no; i++)
    {
        fact*=i;
    }
    cout << " Factorial of a number is " << fact;
    
    return 0;
}