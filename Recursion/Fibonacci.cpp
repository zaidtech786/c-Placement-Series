#include <iostream>
using namespace std;

void printFibo(int a , int b , int no){
    if(no == 0) {
        return;
    }
    int c = a+b; 
    cout << c << " ";  //  1  
    printFibo(b,c,no-1);
}
int main()
{
    int a = 0,b = 1;
    int no = 7;
    cout << a << " " << b << " ";
    printFibo(a,b,no-2);
    return 0;
}