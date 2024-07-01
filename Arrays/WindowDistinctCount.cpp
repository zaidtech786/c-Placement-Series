#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector <int> windowCount(int arr[] , int n,int k){
 unordered_map<int,int> mp;
     for (int i = 0; i < k; i++)
     {
         mp[arr[i]]++;
     }
     vector <int> ans;
     ans.push_back(mp.size());

     for (int i = k; i < n; i++)
     {
         if(mp[arr[i - k]] == 1)
            mp.erase(arr[i - k]);
         else
           mp[arr[i - k]]--;
     mp[arr[i]]++;
     ans.push_back(mp.size());
     }
     return ans;
}
int main(){

 int arr [] = {1,2,1,3,4,2,3};
 int k = 4;
 int n = sizeof(arr) / sizeof(arr[0]);
 vector <int> ans =  windowCount(arr,n,k);
 for(auto i : ans)
   cout << i << " ";

}