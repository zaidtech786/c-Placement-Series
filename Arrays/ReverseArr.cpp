#include <iostream>
using namespace std;

void reverseArr(int arr[],int n){
   int s = 0 , e = n;
   while (s<=e)
   {
      swap(arr[s++],arr[e--]); 
     
   }
} 

void printArray(int arr[], int n){
 for (int i = 0; i < n; i++)
 {
    cout << arr[i] << " ";
 }
 
}



int main(){
   int arr[5]={1,2,3,4,5};
   reverseArr(arr,5);
   printArray(arr,5);
   return 0;
}