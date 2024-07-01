#include<iostream>
using namespace std;
#include <limits.h>

// This problem is solved using binary search;
//First we need to identify which half is sorted either left or right half.
int findMin(int arr[],int len){
    int low = 0,high = len - 1;
    int ans = INT_MAX;
    while (low <=high)
    {
        int mid = (low + high) / 2;
        // condition for left half is sorted
        if(arr[low] <=arr[mid]){
            ans = min(ans,arr[low]);
            low = mid + 1;
        }
        else{ //if Right half is sorted
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }

    }
    return ans;
    
}

int main(){
    // Find Minimum In Rotated Sorted Array
  int arr [] = {4,5,1,2,3};
  int len = sizeof(arr)/sizeof(arr[0]);
  cout << findMin(arr,len);
 
}