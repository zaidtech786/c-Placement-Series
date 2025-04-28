#include <iostream>
using namespace std;

// Insertion  Sort me first element ko sorted manke chalege aur right element ko previous element se compare karke sort karte jayege bas;
// TC : O(n2)
// SC : O(1)
// Best Case: O(n)
// Worst Case : O(n2)


void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {   // 9 
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {   // 5 
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
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

/*
 for i = 1 
  5  9  6  4  3   1

  for i = 2 
  5  6  9  4  3  1

  for i = 3 
   4  5  6   9   3  1 

   for i = 4
   3  4   5   6   9   1 

   for i = 5
   1  3  4   5  6  9

*/
