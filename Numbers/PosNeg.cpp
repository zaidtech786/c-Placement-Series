#include <iostream>
using namespace std;

int main()
{
    int no ; 
    cout << "Enter a number : ";
    cin >> no;
    if(no > 0) {
        cout << no << " is Positive";
    }
    else{
        cout << no << " is negative";
    }
    return 0;
}