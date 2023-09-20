#include <iostream>
#include <vector>
using namespace std;

void calcIntersection(int arr1[], int arr2[],int m , int n){
    vector <int> ans;
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
            }
        }
        
     }

     for (int i = 0; i < ans.size(); i++)
     {
        cout << ans[i] <<" ";
     }
     
     
}


int main()
{
    int arr1 [6]= {1,5,6,7,8,9}; 
    int arr2[6] = {1,5,11,7,2,10}; 

    calcIntersection(arr1,arr2,6,6);
    return 0;
}