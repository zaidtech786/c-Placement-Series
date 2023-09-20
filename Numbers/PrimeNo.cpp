#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    bool isprime = true;
    if (n < 2)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    return isprime;
}

bool getPrimeInRange(int no)
{
    bool isprime = true;
    if (no < 2)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < no; i++)
        {
            if (no % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    return isprime;
}
int main()
{
    int i, n = 12;
    // bool isPrime = checkPrime(n);

    // string result = isPrime ? "Prime" : "not Prime";
    // cout<<"The number " << n << " is " << result;

    // cout << getPrimeInRange(3);
    // getPrimeInRange(100);
    int lower = 1, upper = 100;
    for (int i = lower; i <= upper; i++)
    {
        if (getPrimeInRange(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}