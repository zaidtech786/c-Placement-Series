#include <iostream>
using namespace std;

void InsertionSort(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
          if(arr[j] < arr[i]){
             swap(arr[i] ,arr[j]);
          }
       }
       
    }
    
}

void printArr(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<"  ";
    }
    
}
int main()
{
    int arr[] = {5,9,6,4,3,1};
    InsertionSort(arr,6);
    printArr(arr,6);
    return 0;
}