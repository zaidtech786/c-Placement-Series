#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){
    while (start < end){
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
    }
}
void rotateArr(int arr[],int d,int n){
    // d = d % n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
}


int main(){
    int arr[] = {1,2,3,4,5}; 
    int d = 1;
    rotateArr(arr,d,5);
    printArray(arr,5);
}