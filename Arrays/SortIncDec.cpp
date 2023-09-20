#include <iostream>
using namespace std;

void sort(int arr[] , int len) {
   for (int i = 0; i < len-1; i++)
   {
     for (int j = 0; j < len/2; j++)
     {
        if(arr[j] > arr[j+1]){
            int temp = arr[j] ; 
            arr[j] = arr[j+1];
            arr[j+1] = temp ;
        }
     }
     
     for (int j = len/2; j < len-1; j++)
     {
         if(arr[j] < arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
     }
     
   }


   for (int i = 0; i < len; i++)
   {
      cout << arr[i] << " "; 
   }
   
   
}
int main()
{
    int arr[6] = {5,8,9,1,2,4};
    sort(arr,6);
    return 0;
}