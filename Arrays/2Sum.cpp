#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector <int> twoSum(int arr[] ,int n, int target){
     map<int,int> mpp;
     for (int i = 0; i < n; i++)
     {
        int num = arr[i];
        int moreNeeded = target - num;   //9 - 2 = 8   9 - 7 = 2    9 -11 = -2   9 - 15
        if(mpp.find(moreNeeded) != mpp.end()){
            return {mpp[moreNeeded] , arr[i]};
        }
        mpp[num] = i;   //Adding the element to the map;
     }
     
    return {-1,-1};
}

string twoSum2(int arr[] , int n ,  int target){
    int left = 0, right = n-1;
//    first we need to sort the array
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

  while(left < right){
      int sum  = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target )
            left++;
        else
            right--;
    }
    return "NO"; 
}


int main(){
// In this problem given a array and target we need to return the index which sums up to become a target;
int arr [] = {2,7,11,15};
int n = sizeof(arr) / sizeof(arr[0]);
int target = 9;
   vector <int> ans = twoSum(arr,n,target);
   for(auto i : ans)
     cout << i << " ";


// 2 Sum Second type is to return yes if two number sums up to become a target this problem is solved using 2 pointer approach
//  cout <<  twoSum2(arr,n,target);
}