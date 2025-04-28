#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
using namespace std;

// Kadanes Algorithm
// long long calcMaxSubArr(int arr[] , int n){
//  int sum = 0, maxSum = INT_MIN;
//  int start = -1 , end = -1;
//  for (int i = 0; i < n ; i++)
//  {
//     if(sum == 0){
//         start = i;
//     }
//     sum+=arr[i];
//     if(sum > maxSum){
//        maxSum = sum;
//        end = i;
//     }
   
//     if(sum < 0)  sum = 0;
//  }

//     cout << "Subarrays : " ;
//  for (int i = start; i < end + 1; i++)
//  {
//     cout << arr[i] << " ";
//  }
//     cout << endl;
//  cout << "Maximum Sum :";

//  return maxSum;

// }

long long calcMaxSubArr(int arr[] , int n){
  int sum = 0 ,max_sum = 0 , start = -1 , end = -1;
  for (int i = 0; i < n; i++)
  {
     sum+=arr[i];
     if(sum == 0)  start = i;

     if(sum > max_sum){
      max_sum = sum;
      end = i;
     }

     if(sum < 0)  sum = 0;
  }

 cout << "subArrays : " ;
  for (int start = 0; start < end + 1; start++)
  {
      cout  <<  arr[start] << " ";
  }
  cout << endl;
  

  return max_sum;
}

int maxSubArr(int arr[],int n){
   int sum = 0, max_sum = INT_MIN;
   for (int i = 0; i < n - 1; i++)
   {
       sum += arr[i];
       max_sum = max(max_sum ,sum );
       if(sum < 0)
         sum = 0;
   }
   return max_sum;
}

// subarray with sum k;
void subArrWithSumK(int arr[], int n , int k){
   int sum = 0,start = -1 , end= -1;
   for (int i = 0; i < n; i++)
   {
      
      sum+= arr[i];   // 10 
      if(sum ==0){
         start = i;
      }
      if(sum == k){
          end = i;
           cout << "subarrays :" << " ";
   for (int start = 0; start < end + 1; start++)
   {
      /* code */
      cout << arr[start] << " ";
   }
          return;
      }
      if(sum < 0){
         sum = 0;
      }
   }
   
  
   
}


int main()
{
    int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k = 11;
   //  cout << calcMaxSubArr(arr,9);
   //  cout << maxSubArr(arr,len);

   subArrWithSumK(arr,len,k);
    return 0;
}