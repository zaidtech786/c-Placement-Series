#include <iostream>
using namespace std;

// Move Zeros to end or Sort 0,1
void moveZerosToEnd(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i] == 1){
        swap(arr[i],arr[j]);
        j++;
       }
    }
    
}

void MoveNegativeNo(int arr[] , int n){
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] >=  0){
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
    int arr1 [] = {0,1,0,0,1,1,0,1}; // 0 0  0 1  1 1 
    int arr2 [] = {1,5,-8,7,-3,-4};
    
    // moveZerosToEnd(arr1,8);
      MoveNegativeNo(arr2, 8);
      printArray(arr2, 8);

    return 0;
}