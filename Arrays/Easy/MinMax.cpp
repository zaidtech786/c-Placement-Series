#include <iostream>
using namespace std;

int findMin(int arr[],int size){
    int min = arr[0];
  for (int i = 0; i < size; i++)
  {
    if(arr[i] < min){
        min = arr[i];
    }
  }
  return min;
  
}

int findMax(int arr[],int size){
     int max = 0;
  for (int i = 0; i < size; i++)
  {
    if(arr[i] > max){
        max = arr[i];
    }      
    //OR  maxi = max(maxi,arr[i]);   shorthand using method
  }
  return max;

}
int main(){
    int arr[6] = {7,8,2,6,10,12};
   cout << "Minimum Element is : " << findMin(arr,6) <<endl;
   cout << "Maximum Element is : " <<  findMax(arr,6);

    return 0;

}