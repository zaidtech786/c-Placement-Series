#include <iostream>
using namespace std;

int main()
{
    int no1 = 12,no2= 7, no3 = 5;

    if (no1 > no2 && no1 > no3)
    {
        cout << no1 << " is Greater";
    }
    else if(no2 > no3 ){
        cout << no2 << " is Greater";
    }
    else{
        cout << no3 << " is Greater";
    }
    
    return 0;
}