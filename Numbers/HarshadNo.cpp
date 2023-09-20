#include <iostream>
using namespace std;

int HarshadNo(int no){
    int temp = no;
    int digit = 0,sum = 0;
    while (temp != 0)
    {
        digit = temp % 10 ;
        sum +=digit;
        temp/=10;
    }
    if(no % sum == 0){
        cout <<  no << " is Harshad Number";
    }
    else{
          cout <<  no << " is not Harshad Number";
    }
    
}

int main()
{
    int no = 153;
    HarshadNo(no);
    return 0;
}