#include <iostream>
using namespace std;

int maxConsecutive(int arr[], int len)
{
    int cnt = 0, maxi = 0;
    for (int i = 0; i < len ; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
            cnt = 0;
    }
    return maxi;
}
int main()
{

    int arr[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = maxConsecutive(arr, size);
    cout << ans <<endl;
}