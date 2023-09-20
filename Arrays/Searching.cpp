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
    int s = 0 , e = len;
    int mid = (s+e) / 2 ;
    while (s<=e){
        if(arr[mid] == key){
           return key;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
   
    
}
int main()
{
    int arr[5] = {5,4,8,9,6};
    int key = 6;
    cout << linearSearchKey(arr,key,5) <<endl;
    cout << binarySearchKey(arr,key,5);   

    return 0;
}