#include <iostream>
using namespace std;

void calcFrequency(int arr[] , int n){
   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        if(arr[i] < arr[j]){
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
int main()
{
    int arr [] = {1 ,2, 3 ,3 ,2, 4, 1 ,4 ,4 ,5 };
    calcFrequency(arr,10);
    printArray(arr,10);
    return 0;
}