#include <iostream>
#include <vector>
using namespace std;

vector <int> calcIntersection(int arr1[], int arr2[],int m , int n){
    vector <int> ans;
   int i = 0, j = 0;
   while (i < m && j < n)
   {
       if(arr1[i] < arr2[j])
          i++;
       
       else if(arr2[j] < arr1[i])
          j++;
       
       else{
          ans.push_back(arr1[i]);
          i++;
          j++;
       }
   }
   return ans;
}


int main()
{
    int arr1 []= {1,2,3,3,4,5,6,7}; 
    int arr2[] = {3,3,4,4,5,8}; 

    vector <int> ans =  calcIntersection(arr1,arr2,8,6);
    for(auto i : ans)
       cout << i << " ";
    return 0;
}