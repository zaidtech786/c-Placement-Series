#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int>temp;
    while(left <=mid && right <=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
             temp.push_back(arr[right]);
             right++;
        }
    }

    while (left<=mid)
    {
          temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    
}
void mergeSort(int arr[] , int low , int high){
    int mid = (low+high)/2;
    if(low>=high)
        return ;
    
    //Sorting firrst and second half
    mergeSort(arr, low , mid);   
    mergeSort(arr, mid+1 , high);
    merge(arr,low,mid,high);
}



void printArr(int arr[],int len) {
    for (int i = 0; i < len; i++)
    {
       cout << arr[i] << " " ;
    }
    
}
int main(){
   int arr[] = {12, 11, 13, 5, 6, 7};
   int len = sizeof(arr) / sizeof(arr[0]);
   mergeSort(arr,0,len-1);
   printArr(arr,len);

}