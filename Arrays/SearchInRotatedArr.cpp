#include<iostream>
using namespace std;

int search(int arr[],int n,int target){
    int low=0,high = n - 1;
    while (low <=high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
           return mid;
        if(arr[low] <= arr[mid]){   //If left Half is sorted
            if(arr[low] <= target && target <= arr[mid] ){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else
          if(arr[mid] <=target && target <=arr[high]){
            low = mid + 1;
          }
          else
            high = mid - 1;
    }
    return -1;
}
int main(){
int arr[] = {4,5,1,2,3};
  int len = sizeof(arr)/sizeof(arr[0]);
  int target = 1;
cout << search(arr,len,target);

}