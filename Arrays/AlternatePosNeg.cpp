#include <iostream>
using namespace std;
#include <vector>

// Brute Force Approach
void AlternatePosNeg(int arr[], int n)
{
    vector<int> pos, neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else{
           pos.push_back(arr[i]);
        }
    }
    
    int i = 0 ,  j= 0 , k = 0 ;
    while( i < pos.size() && j < neg.size()){
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
}

// Optimal Approach

vector <int> AlternatePosNegOptimal(int arr[] , int n){
    vector<int>ans(n,0);
    int posIndex = 0 , negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex+=2; 
        }
        else {
            ans[posIndex] = arr[i];
            posIndex+=2; 
        }
    }
    return ans;
}



void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
}


int main()
{

    int arr[] = {4, 6, -5, -2, 1, -8};
    AlternatePosNeg(arr, 6);
    // printArray(arr, 6);

    // Optimal Approach
    vector <int> ans =  AlternatePosNegOptimal(arr,6);
    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}
