#include<iostream>
using namespace std;

int main(){
  
  int size;
  cout << "Enter the Size of an array :";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter Element " <<  i + 1 << ": ";
     cin >> arr[i];
  }
  
  cout << "Arrays Elements are : ";
  for (int i = 0; i < size; i++)
  {
     cout << arr[i] << " ";
  }
  


}