#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <cmath>

// Longest method
int calcMajority(int arr[] , int n){
   map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
      if(it.second > n / 2)  return it.first; 
    }
    
}

// Easy Approach
int sortMehod(int arr[] , int n){
   for (int i = 0; i < n; i++)
   {
       for (int j = i+1 ; j < n; j++)
     {
        if(arr[j] < arr[i]){
           int temp = arr[j];
           arr[j] = arr[i];
           arr[i] = temp;
        }
     }
   }
   return arr[n/2];
   
}

int main()
{
   // A majority element is an element that appears more than n/2 times in an array of size n. For eg, an array arr[] = [9, 4, 3, 9, 9, 4, 9, 9, 8] is given, Here 9 appears five times which is more than n/2, half of the size of the array size.
   
    int arr[] = {2,2,1,1,1,2,2};
    cout << calcMajority(arr,7);
     cout << endl;
    // Easy Approach
    cout << sortMehod(arr,7);
    return 0;
}