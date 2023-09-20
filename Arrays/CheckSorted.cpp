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

void sortArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
          if(arr[j] < arr[i]){
            swap(arr[i],arr[j]);
          }
       }
       
    }
    
}

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
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
    sortArray(arr,6);
    printArray(arr,6);
    return 0;
}