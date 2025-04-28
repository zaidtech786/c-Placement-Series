#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int a = 0 , b = 1 , c;
    cout << a << " " << b << "  ";
    for (int i = 2; i < num; i++)
    {
        c = a + b;  //  1  2 3 
        a = b; 
        b = c;
        cout << c << "  ";
    }
    
    return 0;
}