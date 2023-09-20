#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
          if(arr[i] == arr[j]){
            cout << arr[j] << "  " ;
          }
       }
       
    }

   
    
}
int main(){
  int arr [] = {1,6,3,4,5,3};
  cout << findDuplicate(arr,6);
   return 0;
}