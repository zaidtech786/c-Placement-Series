#include <iostream>
using namespace std;

int main()
{
    int no = 5;
    int sq = no * no ;
    if(sq % 10 == no % 10 ) {
        cout << "Automorphic Number";
    }
    else{
         cout << "Not an Automorphic Number";
    }
    return 0;
}