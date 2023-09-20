#include <iostream>
using namespace std;

int main()
{
    int n1 = 36, n2 = 60, hcf = 1;
     
     for (int i = 1; i <= n1 ||i<=n2; i++)
     {
        if((n1%i==0) && (n2%i==0)){
            hcf = i;
        }
     }
      cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<hcf;
     
    return 0;
}