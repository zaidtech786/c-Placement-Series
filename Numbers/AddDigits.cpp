#include <iostream>
using namespace std;

 int addDigits(int n) {
        long long num = n;
        while(num>9){
            long long sum=0;
            while(num >0){
                sum+= num%10;
                num/=10;
            }
            num = sum;
        }
        return num;
    }
    

int main()
{
    int n = 38;
    cout << addDigits(n);
    return 0;
}