#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

// Longest method
int calcMajority(int arr[] , int n){
  int ma = 0;
  int maxi = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] > ma){
        ma = arr[i];
    }
  }
  int fre[ma+1] = {0};
  for (int i = 0; i < n; i++)
  {
      fre[arr[i]]++;
  }

  for (int i = 0; i < ma+1; i++)
  {
     if(fre[i] !=0 && fre[i] > maxi ){
        maxi =i;
     }
  }
  return maxi;
}


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
    int arr[] = {2,2,1,1,1,2,2};
    cout << calcMajority(arr,7);

    // Easy Approach
    sortMehod(arr,7);
    return 0;
}