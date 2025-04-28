#include<iostream>
using namespace std;

// int PartitionIndex(int arr[], int low, int high) {
//     int pivot = arr[low]; // Pivot is the first element
//     int count = 0;

//     // Count how many elements are less than or equal to the pivot
//     for (int i = low + 1; i <= high; i++) { // Note change from `i < high` to `i <= high`
//         if (arr[i] <= pivot) {
//             count++;
//         }
//     }

//     // Determine the final position of the pivot and swap it there
//     int pivotIndex = low + count;
//     swap(arr[pivotIndex], arr[low]); 

//     // Partition the array around the pivot
//     int i = low, j = high;
//     while (i < pivotIndex && j > pivotIndex) {
//         // Move i to the right until we find an element greater than the pivot
//         while (arr[i] <= pivot) {
//             i++;
//         }
//         // Move j to the left until we find an element less than or equal to the pivot
//         while (arr[j] > pivot) {
//             j--;
//         }

//         // Swap elements at i and j if they are on the wrong side of the pivot
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex; // Return the final pivot position
// }

// void qs(int arr[], int low, int high) {
//     if (low >= high) {
//         return; // Base case: if the partition has 1 or no elements, it's already sorted
//     }

//     int pIndex = PartitionIndex(arr, low, high); // Partition the array
//     qs(arr, low, pIndex - 1); // Recursively sort the left part
//     qs(arr, pIndex + 1, high); // Recursively sort the right part
// }

int partition(int arr[], int low , int high){
   int pivot = arr[low];
   int cnt = 0;
   for (int i = low; i <= high; i++)
   {
      if(arr[i] < pivot)  cnt++;
   }

   int pIndex = low + cnt;
   swap(arr[pIndex] , arr[low]);

   int i = low , j = high;

   while (i < pIndex && j > pIndex)
   {
       while (arr[i] <= pivot)
       {
           i++;
       }
       while (arr[j] > pivot)
       {
           j--;
       }
       if(i < pIndex && j > pIndex){
        swap(arr[i++] ,arr[j--]);
       }
   }
   return pIndex;
   
   
}

void qs(int arr[],int low, int high){
    if(low >= high) return;
    int pIndex = partition(arr,low,high);
    qs(arr,low,pIndex - 1);
    qs(arr,pIndex + 1 , high);
}

void printArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 7, 9, 8, 2}; // Input array
    int len = sizeof(arr) / sizeof(arr[0]);

    qs(arr, 0, len - 1); // Perform quicksort on the entire array
    printArr(arr, len); // Output the sorted array

    return 0;
}
