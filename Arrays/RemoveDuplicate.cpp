#include <iostream>
#include <set>
using namespace std;

void removeDuplicate(int arr[] , int n){
    set <int> ans;
   for (int i = 0; i < n; i++)
   {
       ans.insert(arr[i]);
   }
   for(auto i = ans.begin(); i != ans.end(); i++)
      cout<<*i<<" ";
    
    
}
int main()
{
    int arr[] = {10, 10, 20, 30, 30, 40, 40, 40};
    removeDuplicate(arr,8);

    return 0;
}