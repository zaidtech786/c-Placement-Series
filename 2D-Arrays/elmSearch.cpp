#include<iostream>
using namespace std;

void printArr(int arr[][3],int m,int n){
     for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << arr[i][j] << " ";
        
      }
      cout <<endl;
    }
}
int search(int arr[][3],int m,int n,int target){
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
       if(arr[i][j] == target)
         cout << "Element Found at index " <<i <<"," << j;
        
      }
      cout <<endl;
    }
    
}
int main(){
int arr [3] [3] = {1,2,3,4,5,6,7,8,9};
int target;
printArr(arr,3,3);
cout << "Enter the elements you want to search :";
cin >> target;
  search(arr,3,3,target);

}