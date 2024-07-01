#include <iostream>
using namespace std;

int makeUnique(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
    }
    if (count == 0)
        return -1;

    return count;
}
int main()
{
    int arr[] = {3 ,6, 7 ,12 ,13 };
    cout << makeUnique(arr, 4);
}