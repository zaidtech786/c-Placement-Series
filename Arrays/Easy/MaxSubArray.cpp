#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
using namespace std;

long long calcMaxSubArr(int arr[] , int n){
 int sum = 0, maxSum = INT_MIN;
 int start = -1 , end = -1;
 for (int i = 0; i < n - 1; i++)
 {
    if(sum == 0){
        start = i;
    }
    sum+=arr[i];
    if(sum > maxSum){
       maxSum = sum;
       end = i;
    }
   
    if(sum < 0)  sum = 0;
 }

    cout << "Subarrays : " ;
 for (int i = start; i < end + 1; i++)
 {
    cout << arr[i] << " ";
 }
    cout << endl;
 cout << "Maximum Sum :";

 return maxSum;

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



int main()
{
    int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    cout << "Max :" << calcMaxSubArr(arr,9);
   //  cout << maxSubArr(arr,9);
    return 0;
}