#include <iostream>
using namespace std;

int findDistinct(int arr[] , int n) {
    int fre[n+1] = {0};
    int count= 0 ;
   
  for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }

     for (int i = 0; i < n+1; i++)
    {
       if(fre[i] == 1){
        count++;
       }
        }
    return count;
  
}
int main()
{
  int arr[] = {1, 3, 1, 2, 4, 2, 5, 1}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
 cout << findDistinct(arr,n);
    return 0;
}