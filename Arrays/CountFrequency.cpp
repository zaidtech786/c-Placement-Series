#include <iostream>
#include <math.h>
using namespace std;

void countFrequency(int arr[] , int n) {
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        ma = max(ma,arr[i]);
    }
    int fre[ma+1] = {0};

    for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }
    
    for (int i = 0; i < ma+1; i++)
    {
        if(fre[i] != 0){
        cout << i << " => " << fre[i] <<endl;

        }
      
    }
   
    
    
}

int main()
{
    int arr[] = {1,5,9,1,5,9,2,3};
    countFrequency(arr,8);
    return 0;
}