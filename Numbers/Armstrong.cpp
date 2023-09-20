#include <iostream>
#include <math.h>
using namespace std;

int getPower(int no) {
    int count = 0;
    while (no!=0)
    {
        count++;
        no/=10;
    }
    return count;
    
}

int ArmstrongNo(int no,int len) {
    int digit,sum = 0;
    while (no!=0)
    {
        digit = no % 10 ;
        sum += pow(digit,len);
        no/=10;
    }
    return sum;
    
}

int main()
{
    int no =  407 ;
    int len =  getPower(no);
    int sum = ArmstrongNo(no,len);
    if(sum == no) {
        cout << no << " is Armstrong Number";
    }
    else{
        cout << no << " is not Armstrong Number " ;
    }
    return 0;
}