#include <iostream>
using namespace std;
#include <vector>

void pairSum(int arr[],int n , int k){
  for (int i =0; i < n; i++)
  {
  for (int j = i+1; j < n; j++)
  {
    if (arr[i] + arr[j] == k )
    {
      cout << arr[i] << "," << arr[j];
    }
    
  }
  
  }
   
} 
int main(){
   int k = 5;
   int arr[]={2,3,1,9,5,6};
   pairSum(arr,6,k);
   return 0;
}