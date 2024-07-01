#include <iostream>
#include <set>
using namespace std;

// Naive approach
int findDistinct(int arr[] , int n) {
    int fre[n+1] = {0};
    int count= 0 ;
   
  for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }

     for (int i = 0; i < n; i++)
    {
       if(fre[i] == 1){
        count++;
       }
        }
    return count;
}

// Optimal Approach / Remove Duplicate
   int countDistinct(int arr[],int n){
       set<int> st;
       for(int i = 0 ; i< n ; i++){
         st.insert(arr[i]);
       }
       return st.size();
   }

int main()
{
  int arr[] = {1, 3, 1, 2, 4, 2, 5, 1}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  // cout << findDistinct(arr,n) <<endl;
  cout << countDistinct(arr,n);   // Remove Duplicate
    return 0;
}