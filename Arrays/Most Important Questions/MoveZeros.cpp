#include<iostream>
using namespace std;

void moveZeros(int arr[] , int n){
    int j = 0;
    for (int i = 0; i < n; i++)
    {
         if(arr[i] > 0 || arr[i] < 0){
            swap(arr[i],arr[j]);
            j++;
         }
    }
    
}

void printArr(int arr[], int n){
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}
int main(){
int arr[] = {0,0,1,4,6,0};
int size = sizeof(arr)/sizeof(arr[0]);
moveZeros(arr,size);
printArr(arr,size);

}