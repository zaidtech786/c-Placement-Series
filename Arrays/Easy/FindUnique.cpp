#include <iostream>
#include <unordered_set>
#include <map>
#include <set>
using namespace std;

int findUniqueNo(int arr[], int n){
   // If there is only one unique element
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
       ans = ans ^ arr[i];
    }
    return ans;

// If unique element more than 1 
  map<int,int> freq;
   for (int i = 0; i < n; i++)
   {
      freq[arr[i]]++;
   }

   for(auto i : freq){
      if(i.second == 1){
         cout << i.first << " ";
      }
      // cout << i.first << " -> " << i.second << endl;
   }
   
}

int main(){
  int arr [] = {1,3,1,3,6,6,7,10,11,12,7};
  int size = sizeof(arr) / sizeof(arr[0]);
  findUniqueNo(arr,size);
   return 0;
}