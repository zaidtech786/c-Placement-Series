#include <iostream>
using namespace std;

int main()
{
    int no = 10, sum = 0;
    for (int i = 0; i <= no; i++)
    {
        sum += i;
    }
    // Second trick is to find using formula;
    int sum2 = no * (no + 1) / 2;
    cout << sum2 << endl;

    cout << " Sum of First n Natural Number is " << sum;
    return 0;
}