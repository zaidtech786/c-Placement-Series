#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std;


unordered_set<int> RepeatingNo(int arr[], int len)
{
   unordered_set <int> seen;
   unordered_set<int> res;
   for (int i = 0; i < len; i++)
   {
      if(seen.find(arr[i]) != seen.end()){    // seen will return true if number is already present;
          res.insert(arr[i]);
      }
      seen.insert(arr[i]);
   }
   
return seen;
}


// using Map
int RepeatingNo2(int arr[], int len){
   map<int,int> mp;
   for (int i = 0; i < len; i++)
   {
    /* code */
    mp[arr[i]]++;
   }
   for(auto i : mp){
    // cout << i.first << " -> " << i.second <<endl;
    if(i.second != 1)
      return i.first;
   }
}


int main()
{
    int arr[] = {1, 2, 3, 4,2, 2 , 5,4,5 , 5 , 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    unordered_set <int>  ans = RepeatingNo(arr, len);

    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}
