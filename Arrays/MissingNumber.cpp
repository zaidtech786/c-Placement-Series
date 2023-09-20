#include <iostream>
using namespace std;

int findMissingNo(int arr[] , int n) {
  int total = (n *(n+1)) / 2 ;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return total - sum;
  
}
int main() { 
    int arr [] = {1,2,3,5,6,7};
    cout << findMissingNo(arr,6);
    return 0;
}