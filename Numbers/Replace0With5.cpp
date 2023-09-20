#include <iostream>
using namespace std;

int reverseDigit(int no){
    int rev = 0;
    while (no!=0)
    {
        int digit = no % 10;
         rev = rev * 10 + digit;
        no/=10;
   }
   return rev;
    
}

int main()
{
    int no = 1010;
    int temp = no;
    int rev = 0;

    while (temp!=0)
    {
        int digit = temp % 10;
        if(digit == 0){
            digit = 5;
        }
         rev = rev * 10 + digit;
         temp /=10;
    }
    cout << rev <<endl;

    cout << "Replaced :" << reverseDigit(rev);
    return 0;
}