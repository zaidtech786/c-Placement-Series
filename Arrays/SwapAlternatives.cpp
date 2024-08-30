#include <iostream>
using namespace std;


void swapAlternatives(int arr[] , int n){
//     for (int i = 0; i < n; i+=2)
//     {
//      int temp = arr[i];
//      arr[i] = arr[i + 1] ;
//      arr[i + 1] = temp; 
//     }
    
    for(int i = 0 ; i < n ; i++){
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1 ] = temp;
    }
}


void printArray(int arr[], int n){
  for (int i = 0; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }
  
}


int main() {
   int arr[] = {8,5,6,4,1,3};
   swapAlternatives(arr,6);
   printArray(arr, 6);

    return 0;
}