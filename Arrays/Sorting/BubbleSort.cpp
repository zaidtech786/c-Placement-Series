#include <iostream>
using namespace std;


// Bubblesort me n - 1 round chalege aur har round me 1st maximum element sort ho jayege.
// har round me 2 element ko compare karege.
// TC : O(n2)   SC : O(1)
// Best Case : O(N)  Worst case : O(n2)

void BubbleSort(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
             if(arr[j] > arr[j+1]){
               swap(arr[j],arr[j+1]);
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
    int arr[] = {5,9,6,4,3,1};   //  5 6 4 3 1 9    
    int len = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,len);           // 5 6 4 3 1 9   5 4 6 3 1 9    5 4 3 6 1 9   5 4 3 1 6 9
    printArr(arr,len);
    return 0;
}

// bool isSwapped = false;
//     for (int i = 1; i < n; i++)    //Rounds 
//     {
//        for (int j = 0; j < n-i; j++)
//        {
//           if(arr[j] > arr[j+1]){
//              swap(arr[j] ,arr[j+1]);
//              isSwapped = true;
//           }
//        }
//     }
//     if(isSwapped == false){
//       return;
//     }