#include <iostream>
using namespace std;

void BubbleSort(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n-i; j++)
       {
          if(arr[j] > arr[j+1]){
             swap(arr[j] ,arr[j+1]);
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
    BubbleSort(arr,6);
    printArr(arr,6);
    return 0;
}