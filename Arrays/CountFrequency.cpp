#include <iostream>
#include <map>
#include <math.h>
using namespace std;

void countFrequency(int arr[] , int n) {
//     int len = 0;
//   for (int i = 0; i < n - 1; i++)
//   {
//       len = max(len,arr[i]);
//   }
//   int freq[len] = {0};
//   for (int i = 0; i < n; i++)
//   {
//      freq[arr[i]]++;
//   }

//   for (int i = 0; i < n; i++)
//   {
//      if(freq[i] !=0){
//         cout << i << " -> " << freq[i] << endl;
//      }
//   }
   int len = 0;
   for (int i = 0; i < n; i++)
   {
      len= max(len,arr[i]);
   }
   int freq[len] = {0};

   for (int i = 0; i < n; i++)
   {
       freq[arr[i]]++;
   }

   for (int i = 0; i < n; i++)
   {
      if(freq[i] != 0)
       cout << i << " -> " <<   freq[i] << " " ; 
   }
   
   
   
}

// Optimal Approach using map
map <int , int> countFrequency2(int arr[] , int n){
    map <int,int> freq;
    for (int i = 0; i < n; i++)
    {
       freq[arr[i]]++;
    }
    return freq;
    
}

int main()
{
    int arr[] = {1,5,9,1,5,9,2,3};
   //  countFrequency(arr,8);   
    map <int , int> ans = countFrequency2(arr,8);
      for(auto i : ans)
      cout << i.first << " -> " << i.second <<endl;
    return 0;
}