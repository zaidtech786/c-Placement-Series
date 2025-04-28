#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector <pair<int,int>> twoSum(int arr[] ,int n, int target){
    unordered_map<int, int> mpp;
    vector<pair<int,int>> result;
     for (int i = 0; i < n; i++)
     {
        int num = arr[i];
        int moreNeeded = target - num;   //9 - 2 = 7   9 - 7 = 2    9 -11 = -2   9 - 15
        if(mpp.find(moreNeeded) != mpp.end()){
            // return {moreNeeded, arr[i]};
            result.push_back({moreNeeded, arr[i]});
        }
        mpp[num] = i;   //Adding the element to the map;
     }
     
    return result;
}


int main(){
// In this problem given a array and target we need to return the index which sums up to become a target;
int arr [] = {2,7,11,15 ,1 , 8};
int n = sizeof(arr) / sizeof(arr[0]);
int target = 9;
   vector <pair<int,int>> ans = twoSum(arr,n,target);
   for(auto i : ans)
     cout << "{" << i.first  << "," << i.second << "}" << " ";

}