#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;


// Remove Duplicate from a Sorted Array
int  removeDuplicateFromSortedArray(int arr[], int n){    
   int i = 0;
   for (int j = 1; j < n; j++)
   {
       if(arr[j] != arr[i]){
        arr[i + 1] = arr[j];
        i++;
       }
   }
 return i+1;  
}

void printArr(int arr[] , int n) {
  for (int i = 0; i < n; i++)
  {
     cout << arr[i] << " ";
  }
  
}


// Remove Duplicate from a UnSorted Array
// Method1
void removeDuplicates(int arr[], int &n) {
    unordered_set<int> uniqueElements;

    int index = 0;
    for (int i = 0; i < n; i++) {
        // If the element is not already in the set, add it to the result
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            uniqueElements.insert(arr[i]);
            arr[index++] = arr[i];
        }
    }
   
    // Update the size of the array
    n = index;
}


// Method2
set <int> removeDuplicateBruteForceApproach(int arr[], int n){
    set<int>st;
   for (int i = 0; i < n; i++)
   {
     st.insert(arr[i]);
   }
  
  return st;

}
int main(){
  int arr [] = {1,2,2,2,3,3}; 
   int ans = removeDuplicateFromSortedArray(arr,6);
   cout << ans;
   return 0;
}