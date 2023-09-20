#include <iostream>
using namespace std;

void sortArray(int arr[], int n){

  for (int i = 0; i < n; i++)
  {
     for (int j = i+1 ; j < n; j++)
     {
        if(arr[j] < arr[i]){
           int temp = arr[j];
           arr[j] = arr[i];
           arr[i] = temp;
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
int main(){
  int arr[6] = {7,8,2,6,10,12};
  sortArray(arr,6);
  printArray(arr, 6);

    return 0;
}