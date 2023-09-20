#include <iostream>
using namespace std;

int calcSubArr(int arr[], int n , int sum){
    int curr_Sum = 0;
    int right = 0 , left = 0;
   while(right<n)
    {
       if(curr_Sum == sum){
        return sum;
       }
       else if(curr_Sum < sum) {
        curr_Sum+=arr[right++];
       }
       else{
        curr_Sum-=arr[left++];
       }

    }
    
}

int main()
{
    int arr[6] = {1,4,20,3,10,5};
    int sum = 33;
    cout << calcSubArr(arr,6,sum);

    return 0;
}