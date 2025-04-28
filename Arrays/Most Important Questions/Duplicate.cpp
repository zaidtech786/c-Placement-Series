#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;


// Remove Duplicate from a Sorted Array
int  removeDuplicate(int arr[], int n){    
int i = 0;
	for(int j = 1; j < n;j++){              
		if(arr[j] != arr[i]){
			arr[i + 1] = arr[j];
			i++;
		}
	}
  n = i + 1;
	return n;
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
set <int> removeDuplicate2(int arr[], int n){
    set<int>st;
   for (int i = 0; i < n; i++)
   {
     st.insert(arr[i]);
   }
  
  return st;

}
int main(){
  int arr [] = {1,2,2,2,3,3}; 
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans =  removeDuplicate(arr,n);   //Remove Duplicate from a Sorted Array
  //  printArr(arr,ans);
  
  cout << endl;

  removeDuplicates(arr,n);
printArr(arr,ans);
   
  int arr2 [] = {4,5,5,4,5,6};
  set <int> s = removeDuplicate2(arr2,6);  // Remove Duplicate from a UnSorted Array
  // for(auto i : s){
  //   cout << i << " ";
  // }
   return 0;
}