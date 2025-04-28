#include <iostream>
#include <vector>
using namespace std;

// Longest Subarray with sum k
int LongestSubArrayWithSumK(int arr[], int n , int k){
int left = 0 , right = 0,maxLen = 0 , sum = arr[0];
while (right < n)
{
    while(left<=right && sum > k){
        sum-=arr[left++];
    }
    if(sum == k)  maxLen = max(maxLen , right - left + 1);
    if(right < n) sum+=arr[right++];
}
return maxLen;
}

int main()
{                                 
    int arr[] = {1,2,3,1,1,1,1};    
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 3;               
 
    int ans = LongestSubArrayWithSumK(arr,len,sum);
   cout << ans ; 

    return 0;

}