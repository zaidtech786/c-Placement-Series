#include <iostream>
using namespace std;

bool checkSorted(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
    
}

int main()
{
    int arr[6] = {1,4,9,6,2,5};
    // if(checkSorted(arr,6)){
    //     cout << "Sorted";
    // }
    // else{
    //     cout << "Not Sorted";
    // }
    
    return 0;
}