#include <iostream>
using namespace std;

int main()
{
    int no = 212, rev = 0;
    int temp = no;
    while (temp!=0)
    {
       int digit = temp % 10;
        rev = rev * 10 + digit;
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