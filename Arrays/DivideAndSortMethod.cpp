#include <iostream>
using namespace std;

void SortZeroOne(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i] == 0){
        swap(arr[i],arr[j]);
        j++;
       }
    }
    
}

void MoveNegativeNo(int arr[] , int n){
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] < 0){
    swap(arr[i],arr[j]);
        j++;
    }
  }
  
}
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
}
int main(){                      // 
    int arr1 [] = {1,0,0,1,0,1}; // 0 0  0 1  1 1 
    int arr2 [] = {1,5,-8,7,-3,-4};
    
    SortZeroOne(arr1,6);
    // MoveNegativeNo(arr2, 6);
      printArray(arr1, 6);

    return 0;
}