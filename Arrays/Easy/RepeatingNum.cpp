#include <iostream>
#include <map>
using namespace std;


int RepeatingNo(int arr[], int len)
{
    int length = 0;
    for (int i = 0; i < len; i++)
    {
        length = max(length,arr[i]);
    }
    int freq[length] = {0};

    for (int i = 0; i < len ; i++)
    {
         freq[arr[i]]++;
    }
    
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        
         if(freq[i] == 2){
            ans = i;
         }
    }
    
    return ans;
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
    if(i.second == 2)
      return i.first;
   }
}

// XOR Method
int RepeatingNo3(int arr[], int len){
    int xore = 0 , cnt = 0, ans= -1;
    for (int i = 0; i < len; i++)
    {
        if(xore ^ arr[i] ){
            ans = i;
        }
    }
    return arr[ans];
  
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << RepeatingNo2(arr, len) << " ";
    return 0;
}