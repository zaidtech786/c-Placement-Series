#include <iostream>
using namespace std;

int main()
{
    int no = 212, rev = 0,digit = 0;
    int temp = no;
    while (temp!=0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;  //  2  1  2 
        temp/=10;
    }
    if(no == rev) {
        cout << "palindrome";
    }
    else{
    cout << "Not Palindrome";
    }

    return 0;
}