#include<iostream>
using namespace std;

void sort012(int arr[],int n){
int low = 0,mid = 0, high = n-1;
while (mid <= high)
{
    if(arr[mid] == 0)
        swap(arr[low++],arr[mid++]);
    else if(arr[mid] == 1)
        mid++;
    else
        swap(arr[mid++],arr[high--]);
}

}
void printArr(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    }
    
}

// Sort 0 and 1
void sort01(int arr[],int n){

    // FIRST APPROACH
    
//    int low = 0, high = n - 1 ;
//    while (low <= high)
//    {
//        if(arr[low] == 0){
//           low++;
//        }
//        else{
//         swap(arr[low],arr[high]);
//         high--;
//        }
//    }

// SECOND APPROACH
int j = 0;
for (int i = 0; i < n; i++)
{
    if(arr[i] == 1){
        swap(arr[i],arr[j]);
        j++;
    }
}

}

int main(){
//    int arr[] = {0,2,1,2,0};  //0 2 1 2 0   0 0 1 2 2  0 0 1 2 2   0 0 1 2 2
//    sort012(arr,5);           //lm      h     lm     h   l m   h          
//    printArr(arr,5);

   int arr2 [] = {1,0,0,1,1,0};
   sort01(arr2,6);
    printArr(arr2,6);

}