#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
   for(int i = 0 ; i < n - 1; i++){
    int minIndex = i;
     for (int j = i+1; j < n; j++)
     {
         if(arr[j] < arr[minIndex]){
            minIndex = j;
         }
     }
     swap(arr[i],arr[minIndex]);
    
   }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    // Selection sort runs n - 1 rounds and swaps the minimum element in each round.
    // TC = O(n^2), SC = O(1) 
    int arr[] = {5, 9, 6, 4, 3, 1};   
    int len = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, len);
    printArr(arr, len);
    return 0;
}
