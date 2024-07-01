#include<iostream>
using namespace std;

void OddEven(int arr[] , int n) {
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            swap(arr[i] , arr[j]);
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

int main(){
   int arr [] = {2,1,3,4,6,8,7};
   int n = sizeof(arr) / sizeof(arr[0]);
   OddEven(arr,n);
   printArray(arr,n);

}