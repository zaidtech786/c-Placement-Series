#include <iostream>
using namespace std;

int main()
{
    int no = 100;
    cout << "Factors of " << no << " are " << endl;
    for (int i = 1; i <= no; i++)
    {
       if(no % i ==0){
        cout << i <<endl;
       }
    }
    
    return 0;
}