#include <iostream>
using namespace std;

int linearSearchKey(int arr[], int key, int len){
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == key){
            return  i ;
        }
    }
}

int binarySearchKey(int arr[], int key, int len){
    int left = 0 , right = len - 1 , mid = (left + right) / 2;
    while (left < right)
    {
       if(arr[mid]==key)  return mid;
       else if(arr[mid] > key)  right = mid - 1;
       else  left = mid + 1;
    }
    
}

int main()
{
    int arr[5] = {4,5,6,8,9};
    int key = 6;
    cout << linearSearchKey(arr,key,5) <<endl;
    cout << binarySearchKey(arr,key,5);   

    return 0;
}