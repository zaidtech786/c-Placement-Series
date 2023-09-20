#include <iostream>
using namespace std;

// int findFactorial(int no) {
//     int fact = 1;
//     for (int i = 1; i <=no; i++)
//     {
//         fact*=i;
//     }

//     return fact;
// }

// int detectStrong(int no) {
//     int digit = 0 , factSum = 0;
//     while (no !=0)
//     {
//        digit = no % 10 ;
//        factSum = factSum + findFactorial(digit);
//        no /= 10;
//     }
//    return factSum;
// }

int findFact(int no) {
    int fact = 1;
    for (int i = 1; i <= no; i++)
    {
      fact*=i;
    }
    return fact;
}

int detectStrong(int no) {
    int temp = no;
    int sum = 0;
    while (temp!=0){
       int digit = temp%10;
        sum+= findFact(digit);
        temp/=10;
    }
    return sum;
    
}

int main()
{
    int no = 145;

    // detectStrong(no);
    if( detectStrong(no) == no) {
        cout << "Strong Number";
    }
    else{
        cout << " Not Strong Number";
    }
    return 0;
}