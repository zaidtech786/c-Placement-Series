#include <iostream>
#include <set>
using namespace std;

int findUniqueNo(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
       ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
  int arr [] = {1,3,1,3,6,6,7,0,7};
  cout << findUniqueNo(arr,9);
   return 0;
}