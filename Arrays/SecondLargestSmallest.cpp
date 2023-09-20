#include <iostream>
using namespace std;

int findSecondLargest(int arr[] , int n){
 int sLargest = -1;
  int largest = arr[0] ;

  for (int i = 0; i < n; i++)
  {
     if(arr[i] > largest){
        sLargest = largest;
        largest = arr[i];
     }
     else if(arr[i] < largest && arr[i] > sLargest){
        sLargest = arr[i];
     }
  }
  return sLargest;
    
}

int findSecondSmallest(int arr[] , int n){
   int smallest = arr[0];
   int sSmallest = 100;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] < smallest)
      {
       sSmallest = smallest;
       smallest = arr[i];
      }
      else if(arr[i] > smallest && arr[i] < sSmallest){
         sSmallest = arr[i];
      }
      
   }
   return sSmallest;
   

}

int main()
{
   
    int arr[5] = {5,6,8,9,7};
    cout << "Second Largest : " <<  findSecondLargest(arr,5) << endl;
   cout << "Second Smallest : " << findSecondSmallest(arr,5);


    
    return 0;
}