#include <iostream>
#include <map>
using namespace std;

void calcFrequency(int arr[] , int n){
  map<int,int> freq;
   for (int i = 0; i < n; i++)
  {
      freq[arr[i]]++;
  }


}


int main()
{
    int arr [] = {1 ,2, 3 ,3 ,2, 4, 1 ,4 ,4 ,5 };
    calcFrequency(arr,10);
    // printArray(arr,10);
    return 0;
}